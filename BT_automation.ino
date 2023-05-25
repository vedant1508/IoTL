char junk;
String inputString="";

void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
}

void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      
    if(inputString == "A"){      
      digitalWrite(3, HIGH);  
    }else if(inputString == "a"){  
      digitalWrite(3, LOW);
    }else if(inputString == "B"){  
      digitalWrite(4, HIGH);
    }else if(inputString == "b"){  
      digitalWrite(4, LOW);
    }else if(inputString == "C"){  
      digitalWrite(5, HIGH);
    }else if(inputString == "c"){  
      digitalWrite(5, LOW);
    }else if(inputString == "D"){  
      digitalWrite(6, HIGH);
    }else if(inputString == "d"){  
      digitalWrite(6, LOW);
    }
    
    
    inputString = "";
  }
}
