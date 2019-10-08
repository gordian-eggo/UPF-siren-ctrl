int test_pin = 13;

RTC_DS1307 rtc;			// create realtime clock 
DateTime curr_time;

void setup() {
  // put your setup code here, to run once:
  pinMode(test_pin, OUTPUT);
}

void loop() {
  now = rtc.now();
  Serial.println(now);

  digitalWrite(test_pin, HIGH);
  delay(1000);
  digitalWrite(test_pin, LOW);
  delay(1000);
}
