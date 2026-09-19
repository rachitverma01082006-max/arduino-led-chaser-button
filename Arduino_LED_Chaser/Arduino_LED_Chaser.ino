int switchState = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);   
  pinMode(5, OUTPUT);   
  pinMode(3, OUTPUT); 
  pinMode(2, INPUT);    // Push button
}

void loop() {

  // Read the push button
  switchState = digitalRead(2);

  if (switchState == LOW) {
    // Button is NOT pressed

    digitalWrite(3, HIGH);  // Blue LED ON
    digitalWrite(4, LOW);   // Yellow LED OFF
    digitalWrite(5, LOW);   // White LED OFF
    digitalWrite(6, LOW);   // Red LED OFF 
    digitalWrite(7, LOW);   // Green  LED OFF
    digitalWrite(8, LOW);   // Blue LED OFF
    digitalWrite(9, LOW);   // Yellow LED OFF
    digitalWrite(10, LOW);  // White LED OFF
    digitalWrite(11, LOW);  // Red LED OFF
    digitalWrite(12, LOW);  // Green  LED OFF
    digitalWrite(13, LOW);  // Blue LED OFF 
  }

  else {
    // Button IS pressed

    digitalWrite(3, LOW);  // Blue LED ON  
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW);  
    digitalWrite(7, LOW);  
    digitalWrite(8, LOW);  
    digitalWrite(9, LOW);  
    digitalWrite(10, LOW); 
    digitalWrite(11, LOW); 
    digitalWrite(12, LOW); 
    digitalWrite(13, LOW); 

    delay(100);

    digitalWrite(3, LOW);    
    digitalWrite(4, LOW);   
    digitalWrite(5, HIGH);  // White LED ON
    digitalWrite(6, LOW);   
    digitalWrite(7, LOW);   
    digitalWrite(8, LOW);   
    digitalWrite(9, LOW);   
    digitalWrite(10, LOW);  
    digitalWrite(11, LOW); 
    digitalWrite(12, LOW); 
    digitalWrite(13, LOW); 

     delay(100);

    digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH); // Red LED ON
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    delay(100);

    digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH); // Green  LED ON
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    delay(100);

    digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
      
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH); // Blue LED ON
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    delay(100);

    digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH); // Yellow LED ON
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    delay(100);

    digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH); // White LED ON
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    delay(100);

    digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH); // Red LED ON
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    
    delay(100);
   
   digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH); // Green LED ON
    digitalWrite(13, LOW);
    
    delay(100);

   digitalWrite(3, LOW);   
    digitalWrite(4, LOW);   
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);  // Blue LED ON
    
    delay(100);


   
  }
}