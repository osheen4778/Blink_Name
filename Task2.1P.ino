void setup() {
  // initializing digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
String code = "";
int unit  = 200;

//Time duration of dot
void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 
}

//Time duration of dash
void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 
}
//To check each string character and run it's morse code.

void MorseCode(String x){
  for(int i = 0; i < x.length(); i++)
  {
    switch(x[i])
    {
      case 'A':       //morse code for alphabet A
        dot();
        dash();
        break;
        
      case 'B':       //morse code for alphabet B
        dash();
        dot();
        dot();
        dot();
        break;
        
      case 'C':        //morse code for alphabet C
        dash();
        dot();
        dash();
        dot();
        break;
        
      case 'D':          //morse code for alphabet D
        dash();
        dot();
        dot();
        break;
        
      case 'E':           //morse code for alphabet E
        dot();
        break;
        
      case 'F':            //morse code for alphabet F
        dash();
        dot();
        dot();
        dash();
        dot();
        break;
        
      case 'G':             //morse code for alphabet G
        dash();
        dash();
        dot();
        break;
        
      case 'H':             //morse code for alphabet H
        dot();
        dot();
        dot();
        dot();
        break;
        
      case 'I':              //morse code for alphabet I
        dot();
        dot();
        break;
        
      case 'J':               //morse code for alphabet J
        dot();
        dash();
        dash();
        dash();
        break;
        
      case 'K':                //morse code for alphabet K
        dash();
        dot();
        dash();
        break;
        
      case 'L':                //morse code for alphabet L
        dot();
        dash();
        dot();
        dot();
        break;
        
      case 'M':                 //morse code for alphabet M
        dash();
        dash();
        break;
        
      case 'N':                 //morse code for alphabet N
        dash();
        dot();
        break;
        
      case 'O':                 //morse code for alphabet O
        dash();
        dash();
        dash();
        break;
        
      case 'P':                  //morse code for alphabet P
        dot();
        dash();
        dash();
        dot();
        break;
        
      case 'Q':                   //morse code for alphabet Q
        dash();
        dash();
        dot();
        dash();
        break;
        
      case 'R':                   //morse code for alphabet R
        dot();
        dash();
        dot();
        break;
        
      case 'S':                    //morse code for alphabet S
        dot();
        dot();
        dot();
        break;
        
      case 'T':                     //morse code for alphabet T
        dash();
        break;
        
      case 'U':                     //morse code for alphabet U
        dot();
        dot();
        dash();
        break;
        
      case 'V':                    //morse code for alphabet V
        dot();
        dot();
        dot();
        dash();
        break;
        
      case 'W':                    //morse code for alphabet W
        dot();
        dash();
        dash();
        break;
        
      case 'X':                   //morse code for alphabet X
        dash();
        dot();
        dot();
        dash();
        break;
        
      case 'Y':                     //morse code for alphabet Y
        dash();
        dot();
        dash();
        dash();
        break;
        
      case 'Z':                     //morse code for alphabet Z
        dash();
        dash();
        dot();
        dot();
        break;
    }
    delay(2000);
  }
}


void loop() {
  while(Serial.available()) {           //serial monitor will show serial input
    char input = (char)Serial.read();   //reads characters from string and stores it in the variable
    code += input;
  }
  MorseCode(code);
}
