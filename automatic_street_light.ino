int LDR = A0; 
int irSensor[5] = {A1, A2, A3, A4, A5};   // IR sensor pins 
int led[5] = {10, 9, 5, 6, 3};      // LED pins (PWM) 
  
// Change this depending on your IR sensor type: 
// true  = HIGH means detected (Active HIGH sensor) 
// false = LOW means detected (Active LOW sensor) 
bool irActiveHigh = false;  //  most IR modules are active LOW 
  
void setup() { 
  Serial.begin(9600); 
  pinMode(LDR, INPUT); 
  
  for (int i = 0; i < 5; i++) { 
    pinMode(irSensor[i], INPUT); 
    pinMode(led[i], OUTPUT); 
  } 
  
  Serial.println("System Ready..."); 
} 
  
void loop() { 
  int ldrValue = analogRead(LDR); 
  Serial.print("LDR: "); 
  Serial.println(ldrValue); 
  
  int lightThreshold = 500; // Adjust based on your environment 
  
  if (ldrValue < lightThreshold) { 
    //  Night Mode 
    for (int i = 0; i < 5; i++) { 
      int sensorValue = digitalRead(irSensor[i]); 
      bool detected = irActiveHigh ? (sensorValue == HIGH) : (sensorValue == LOW); 
  
      if (detected) { 
        analogWrite(led[i], 255); // full brightness when motion detected 
      } else { 
        analogWrite(led[i], 10);  // dim light otherwise 
      } 
    } 
  } else { 
    //  Day Mode - all lights off 
    for (int i = 0; i < 5; i++) { 
      analogWrite(led[i], 0); 
    } 
  } 
  
  delay(200); 
} 
