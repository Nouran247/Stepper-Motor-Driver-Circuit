#define PATTERN_DELAY 1000

void setup() {
  // Initialize all output pins
  for (int pin = 2; pin <= 5; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void set_outputs(byte pattern) {
  digitalWrite(2, pattern & 0x01);  
  digitalWrite(3, pattern & 0x02);  
  digitalWrite(4, pattern & 0x04);  
  digitalWrite(5, pattern & 0x08); 
}

void loop() {
  set_outputs(0x06); delay(PATTERN_DELAY);
  set_outputs(0x03); delay(PATTERN_DELAY);
  set_outputs(0x09); delay(PATTERN_DELAY);
  set_outputs(0x0C); delay(PATTERN_DELAY);
}
