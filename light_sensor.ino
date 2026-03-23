int sensorPin = A0;   // chân cảm biến ánh sáng
int ledPin = 13;      // LED
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin); // đọc giá trị ánh sáng
  Serial.println(sensorValue);

  if(sensorValue < 500){   // tối 
    digitalWrite(ledPin, HIGH); // bật LED
  } 
  else{
    digitalWrite(ledPin, LOW);  // tắt LED
  }

  delay(200);
}
