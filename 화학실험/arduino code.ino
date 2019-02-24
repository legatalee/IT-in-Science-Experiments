void setup() {
  Serial.begin(9600);
  pinMode(A1, INPUT_PULLDOWN);
}

void loop() {
  float data = analogRead(A1);
//  Serial.print("before data : ");
//  Serial.print(data);
//  data = map(data, 345, 1023, 0, 500) / 100.00;
  if (data < 0) data = 0.00;
//  Serial.print("   after data : ");
  Serial.println(data);

  delay(100);
}
