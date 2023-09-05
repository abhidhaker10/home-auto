

int relay1 =3;
int relay2 =4;
int relay3 =5;
int relay4 =6;
int relay5 =7;
int relay6 =8;
int relay7 =9;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // put your setup code here, to run once:
}

/*
relay1 -
relay2 -
relay3 -
relay4 -
relay5 -
relay6 -
relay7 -
*/
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    char data = Serial.read(); // reading the data received from the bluetooth module
    switch (data)
    {
      case 'A': digitalWrite(relay1, HIGH);  Serial.print("relay1 on by command :");    break;      
      case 'a': digitalWrite(relay1, LOW);   Serial.print("relay1 off by command :");   break;

      case 'B': digitalWrite(relay2, HIGH);  Serial.print("relay2 on by command :");    break;
      case 'b': digitalWrite(relay2, LOW);   Serial.print("relay2 off by command :");   break;
      
      case 'C': digitalWrite(relay3, HIGH);  Serial.print("relay3 on by command :");    break;
      case 'c': digitalWrite(relay3, LOW);   Serial.print("relay3 off by command :");   break;
      
      case 'D': digitalWrite(relay4, HIGH);  Serial.print("relay4 on by command :");    break;
      case 'd': digitalWrite(relay4, LOW);   Serial.print("relay4 off by command :");   break;
      
      case 'E': digitalWrite(relay5, HIGH);  Serial.print("relay5 on by command :");    break;
      case 'e': digitalWrite(relay5, LOW);   Serial.print("relay5 off by command :");   break;
      
      case 'F': digitalWrite(relay6, HIGH);  Serial.print("relay6 on by command :");    break;
      case 'f': digitalWrite(relay6, LOW);   Serial.print("relay6 off by command :");   break;
      
      case 'G': digitalWrite(relay7, HIGH);  Serial.print("relay7 on by command :");    break;
      case 'g': digitalWrite(relay7, LOW);   Serial.print("relay7 off by command :");   break;

      case 'H': digitalWrite(relay1, HIGH);
                digitalWrite(relay2, HIGH);
                digitalWrite(relay3, HIGH);
                digitalWrite(relay4, HIGH);
                digitalWrite(relay5, HIGH);
                digitalWrite(relay6, HIGH);
                digitalWrite(relay7, HIGH);
                break;
      case 'h': digitalWrite(relay1, LOW);
                digitalWrite(relay2, LOW);
                digitalWrite(relay3, LOW);
                digitalWrite(relay4, LOW);
                digitalWrite(relay5, LOW);
                digitalWrite(relay6, LOW);
                digitalWrite(relay7, LOW);  
                break;       

      default : break;
    }
    Serial.println(data);
  }
  delay(50);
}
