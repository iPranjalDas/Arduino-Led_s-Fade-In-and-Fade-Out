// ============================================================================
// Project: Arduino-Led_s-Fade-In-and-Fade-Out
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

const int led1 = 5;
const int led2 = 4;

void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop(){
  for(int brightness=1; brightness <=255; brightness++){
  	analogWrite(led1,brightness);
    analogWrite(led2,255-brightness);
    delay(30);
  }
  for(int brightness=255; brightness >0; brightness--){
  	analogWrite(led1,brightness);
    analogWrite(led2,255-brightness);
    delay(30);
  }
}



// Author Footprint: //Pranjal Das
