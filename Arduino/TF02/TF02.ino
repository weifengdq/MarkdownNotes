/*
-------------------------------------------------------------------------------------------
 1        2        3       4       5            6           7           8           9
-------------------------------------------------------------------------------------------
0x59    0x59    Dist_L  Dist_H  Strength_L  Strength_H  Sequence_L  Sequence_H  CheckSum_L  
-------------------------------------------------------------------------------------------
*/
#include <SoftwareSerial.h>

#define rxPin 2
#define txPin 3

//You can connect TF02 only 3 Wires: TF02's 5V, GND and TX pin to Arduino's 5V, GND and rxPin pin. 
SoftwareSerial tfSerial(rxPin, txPin);   //2--rxPin, 3--txPin

typedef struct {
    byte header1;
    byte header2;
    byte distL;     //distL may be 0x59, so checksumL is needed.
    byte distH;
    byte strengthL;
    byte strengthH;
    byte sequenceL;
    byte sequenceH;
    byte checksumL; //checksumL may be 0x59
    unsigned int dist;
    unsigned int strength;
    unsigned int checksum;
}TFData;

TFData tfData;
unsigned int distance;

void setup() {
    pinMode(rxPin, INPUT);
    pinMode(txPin, OUTPUT);
    tfSerial.begin(115200); //Communication with TF02, 115200,8,1
    Serial.begin(115200);   //Communication with PC
}

void loop() {
    //The cycle of loop() should be less than 10ms.
    distance = tfMeasure();
    if(distance > 0) {
        Serial.println(distance);
    }

    //The cycle of loop() should be less than 10ms.
    //Other Code:
}

unsigned int tfMeasure() {
    if(tfSerial.available()>17) {   //8+9
        tfData.header1 = tfSerial.read();
        if(tfData.header1 == 0x59) {
            tfData.header2 = tfSerial.read();
            if(tfData.header2 == 0x59) {    
                tfData.distL = tfSerial.read();
                tfData.distH = tfSerial.read();
                tfData.strengthL = tfSerial.read();
                tfData.strengthH = tfSerial.read();
                tfData.sequenceL = tfSerial.read();
                tfData.sequenceH = tfSerial.read();
                tfData.checksumL = tfSerial.read();
                tfData.checksum = tfData.header1 + tfData.header2 + 
                                tfData.distL + tfData.distH + 
                                tfData.strengthL + tfData.strengthH +
                                tfData.sequenceL + tfData.sequenceH;
                if(tfData.checksumL == tfData.checksum&&0x00ff) {
                    tfData.strength = tfData.strengthL || (tfData.strengthH<<8);
                    if(tfData.strength > 7) {   //Indoor >=3, Outdoor >=10
                        tfData.dist = tfData.distL || (tfData.distH<<8);
                        if(tfData.dist<3000) {
                            return tfData.dist;
                        }
                    }
                }
            }
        }
    }

    return 0;
}

