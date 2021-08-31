   int trigger_pin = 13;
    int echo_pin = 12;
    int buzzer_pin = 9; 
    int time;
    int distance; 

      void setup ( ) {  
      Serial.begin (9600);   
     pinMode (trigger_pin, OUTPUT);   
     pinMode (echo_pin, INPUT);      
     pinMode (buzzer_pin, OUTPUT);
     }

  void loop ( ) {
   digitalWrite (trigger_pin, HIGH);   
   delayMicroseconds (10);
   digitalWrite (trigger_pin, LOW);    
   time = pulseIn (echo_pin, HIGH);    
   distance = (time * 0.034) / 2;

   if (distance <= 15)     
   {      
  Serial.println (" object is near ");     
   Serial.print (" Distance= ");           
    Serial.println (distance);       
   digitalWrite (buzzer_pin, HIGH);   
   delay (1000);        }

 else {               
   Serial.print (" Distance= ");                 
   Serial.println (distance);             
   digitalWrite (buzzer_pin, LOW);        
   delay (1000);        
 } 
    } 
