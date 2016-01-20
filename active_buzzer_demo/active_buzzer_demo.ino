/*
  Tutorial 6a: Simple Scale Sweep
*/

int buzzerPin = 8;    // Using digital pin 8
#define NOTE_C6  1047
#define NOTE_D6  1175
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_G6  1568
#define NOTE_A6  1760
#define NOTE_B6  1976
#define NOTE_C7  2093
#define STEP 500

void setup() {

  // nothing to setup
  pinMode(13, OUTPUT);

}

void loop() {

  GetBack();
  
}

void GetBack() {
  playNote(NOTE_E6, STEP/8);
  playNote(NOTE_E6, STEP/8);
  playNote(NOTE_E6, STEP/8);
  playNote(NOTE_E6, STEP/8);
  playNote(NOTE_E6, STEP);
  playNote(NOTE_F6, STEP/4);
  playNote(NOTE_G6, STEP/4);
  playNote(NOTE_G6, STEP/8);
  playNote(NOTE_G6, STEP/8);
  playNote(NOTE_G6, STEP/8);
  playNote(NOTE_G6, STEP/8);
  playNote(NOTE_F6, STEP/8);
  playNote(NOTE_E6, STEP);
  playNote(NOTE_D6, STEP/4);
  playNote(NOTE_D6, STEP/8);
  playNote(NOTE_D6, STEP/8);
  playNote(NOTE_D6, STEP/8);
  playNote(NOTE_A6, STEP/4);
  playNote(NOTE_F6, STEP);
  playNote(NOTE_F6, STEP/4);
  playNote(NOTE_E6, STEP*2);
}

void playNote(int note, int len) {
  tone(buzzerPin, note, len);
  delay(500);  
}

void simpleDemo() {
    digitalWrite(13, HIGH);
  delay(1000);
  //tone(pin, frequency, duration)
  tone(buzzerPin, NOTE_C6, 500);
  delay(500);
  tone(buzzerPin, NOTE_D6, 500);
  delay(500);
  tone(buzzerPin, NOTE_E6, 500);
  delay(500);
  tone(buzzerPin, NOTE_F6, 500);
  delay(500);
  tone(buzzerPin, NOTE_G6, 500);
  delay(500);
  tone(buzzerPin, NOTE_A6, 500);
  delay(500);
  tone(buzzerPin, NOTE_B6, 500);
  delay(500);
  tone(buzzerPin, NOTE_C7, 500);
  delay(500);
  digitalWrite(13, LOW);
  delay(1000);
} 

