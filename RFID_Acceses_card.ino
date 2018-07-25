int a=0;
void setup() {
  Serial.begin(9600); 
}

void loop() {
  a=analogRead(0)*50;
  Serial.println(a);
 // if (a>600){
   // Serial.println("HIGH");
    
  //  }
  //else{
    //Serial.println("LOW");
    //}
  delay(1000);
}
