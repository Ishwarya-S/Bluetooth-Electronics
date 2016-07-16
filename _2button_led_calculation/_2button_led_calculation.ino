char junk;
String inputString="";
int a= 0;

void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
}

void loop()
{
  if(Serial.available())
    {

      char i=Serial.read();
      if( i=='a')
      {
        if(a<4){
        a=a+1;}
      }
      
   if (i=='b')
      {
        Serial.print("b value");
          
        if(a>=0){
         a=a-1;}
      }
    if(a== 0){         //in case of 'a' turn the LED on
          digitalWrite(9, LOW);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);
    }
    if(a== 1){         //in case of 'a' turn the LED on
          digitalWrite(9, HIGH);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);
        
        }
       
         if(a== 2){         //in case of 'a' turn the LED on
          digitalWrite(9, HIGH);
          digitalWrite(10, HIGH);
          digitalWrite(11, LOW);
      }
         if(a== 3){         //in case of 'a' turn the LED on
          digitalWrite(9, HIGH);
          digitalWrite(10, HIGH);
          digitalWrite(11, HIGH);
      
     }
     
   }
}
