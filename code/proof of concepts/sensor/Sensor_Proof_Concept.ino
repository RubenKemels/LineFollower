int analogPin0 = A0;
int val0 = 0;
int analogPin1 = A1;
int val1 = 0;
int analogPin2 = A2;
int val2 = 0;
int analogPin3 = A3;
int val3 = 0;
int analogPin4 = A4;
int val4 = 0;
int analogPin5 = A5;
int val5 = 0;
//variable to store the value read
void setup () 
{
 Serial.begin (9600);
//Setup serial
}

void loop () 
{
     val0 = analogRead (analogPin0);
     Serial.print(val0);
      Serial.print(" ");


      val1 = analogRead (analogPin1);
     Serial.print(val1);
      Serial.print(" ");


      val2 = analogRead (analogPin2);
     Serial.print(val2);
      Serial.print(" ");

      val3 = analogRead (analogPin3);
     Serial.print(val3);
      Serial.print(" ");
      val4 = analogRead (analogPin4);
     Serial.print(val4);
      Serial.print(" ");

      val5 = analogRead (analogPin5);
     Serial.println(val5);
      Serial.print(" ");
     delay(1000);
}