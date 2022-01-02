
int pin1 = 7;


void dot(){
  digitalWrite(pin1,HIGH);
  delay(500);
  Serial.println("dot");
  digitalWrite(pin1,LOW);
  delay(100);  
  
  }
void dash(){
  digitalWrite(pin1,HIGH);
  delay(1000);
  Serial.println("dash");
  digitalWrite(pin1,LOW);
  delay(100);
  
  }

void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT);
Serial.begin(9600);
}

void loop() {
  


  Serial.println("kum engzat nge i nih?");
   while (Serial.available() == 0) {
    // Wait for User to Input Data
  }
  String text = Serial.readString();
  Serial.println(text);

    for(int i =0;i < text.length();i++){
    if (text[i]=='a'){
        dot();
        dash();
      }
      
     else if(text[i] == 'b'){
       dash();
       dot();
       dot();
       dot();
                         
        }
     else if(text[i] == 'c'){
        dash();
        dot();
        dash();
        dot();
          
        }
     else if(text[i] == 'd'){
        dash();
        dot();
        dot();
          
        } 
     else if(text[i] == 'e'){

        dot();

          
        }   
     else if(text[i] == 'f'){
        dot();
        dot();
        dash();
        dot();
          
        }

    else if(text[i] == 'g'){
        dash();
        dash();
        dot();
          
        }
    else if(text[i] == 'h'){

        dot();
        dot();
        dot();
        dot();
          
        }
    else if(text[i] == 'i'){

        dot();
        dot();
          
        }
    else if(text[i] == 'j'){

        dot();
        dash();
        dash();
        dash();
          
        }
     else if(text[i] == 'k'){
        dash();
        dot();
        dash();

          
        }
    else if(text[i] == 'l'){

        dot();
        dash();
        dot();
        dot();
          
        }
    else if(text[i] == 'm'){
        dash();

        dash();
          
        }
     else if(text[i] == 'n'){
        dash();
        dot();
          
        }
      else if(text[i] == 'o'){
        dash();
        dash();
        dash();
          
        }
     else if(text[i] == 'p'){
        dot();
        dash();
        dash();
        dot();
          
        }
     else if(text[i] == 'q'){
        dash();
        dash();
        dot();
        dash();

          
        }
     else if(text[i] == 'r'){
        dot();
        dash();
        dot();
          
        }
     else if(text[i] == 's'){
 
        dot();
        dot();
        dot();
          
        }
     else if(text[i] == 't'){
        dash();
          
        }
      else if(text[i] == 'u'){

        dot();
        dot();
        dash();
          
        }
      else if(text[i] == 'v'){
        dot();
        dot();
        dot();
        dash();

          
        }
     else if(text[i] == 'w'){
        dot();
        dash();
        dash();

          
        }
     else if(text[i] == 'x'){
        dash();
        dot();
        dot();
        dash();
          
        }
      else if(text[i] == 'y'){
        dash();
        dot();
        dash();
        dash();
          
        }
      else if(text[i] == 'z'){
        dash();
        dash();
        dot();
        dot();
          
        }
     else if(text[i] == ' '){
      Serial.println("space");
      delay(5000);

          
        }
  
    }
    
    
    

  

}

//  Serial.println("kum engzat nge i nih?");
//   while (Serial.available() == 0) {
//    // Wait for User to Input Data
//  }
//  String text = Serial.readString();
//  Serial.println(text);
//  for(int i =0;i < text.length();i++){
//    if (text[i] == 'a'){
//      digitalWrite(pin1,HIGH);
//      }
//      if (text[i] == 'b'){
//      digitalWrite(pin1,LOW);
//      }
//     
//      
//    
//    }
//dot
//  digitalWrite(pin1,HIGH);
//  delay(500);
//  Serial.println("dot");
//  digitalWrite(pin1,LOW);
//  delay(100);

//dash
//  digitalWrite(pin1,HIGH);
//  delay(1000);
//  Serial.println("dash");
//  digitalWrite(pin1,LOW);
//  delay(100);
