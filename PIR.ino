int Realy = 9;                
int sensor = 2;              
volatile state = LOW;            
int val = 0;                 

void setup() {
  pinMode(Relay, OUTPUT); 
    
  pinMode(sensor, INPUT);   
  Serial.begin(9600);       


void loop(){
  val = digitalRead(sensor);   
  if (val == HIGH) {           
    digitalWrite(Realy, HIGH);  
    delay(100);                
    
    if (state == LOW) {
      Serial.println("Movement!"); 
      state = HIGH;       
    }
  } 
  else {
      digitalWrite(Relay, LOW); 
      delay(100);             
      
      if (state == HIGH){
        Serial.println("Dull!");
        state = LOW;       
    }
  }
}
