float sample_rate = 512;
int sample_time_microseconds = round((1/sample_rate)*1000000);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int EEGValue_Raw = analogRead(A0);
  Serial.println(EEGValue_Raw);
  delayMicroseconds(sample_time_microseconds);
}
