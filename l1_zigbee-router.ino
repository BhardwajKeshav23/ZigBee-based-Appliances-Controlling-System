const int RELAY_PIN = 7;
void setup() {
  Serial.begin(9600); 
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  if (Serial.available() > 0)
  {
    char a=Serial.read();
    if(a == '0')
    {
     digitalWrite(RELAY_PIN, HIGH);  
     Serial.println((String)"R3:"+a);
     delay(200);
    }
    else if(a=='1') {                     
     digitalWrite(RELAY_PIN, LOW); 
    
     Serial.println((String)"R3:"+a);  
     delay(200);                      
  }
 }
}
