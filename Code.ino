int VR = 9;
int zf = 7;

void setup(){
  
  pinMode(VR, OUTPUT);
  pinMode(zf, OUTPUT);
  digitalWrite(zf, 1);  //for CW direction =1, for CCW direction =0
  }

  void loop() {
    
    analogWrite(VR, 70); // can change speed from 50-250 rpm
    delay(4);
    
    }
  
