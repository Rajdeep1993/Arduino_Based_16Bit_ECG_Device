void setup() 
{
  Serial.begin(4800);     // initialize the serial communication
}

void loop() 
{
    
  
   Serial.println(analogRead(A0)); // send the value of analog input 0
  
  delay(2);
}
