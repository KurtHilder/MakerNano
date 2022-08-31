/**
   MakerNano

   Turn each led on and off, with a
   frequency based using period.

   LED Pins are found from:
*/

/*
   VARIABLES
*/
const int led_01 = 2;
const int led_02 = 3;
const int led_03 = 4;
const int led_04 = 5;
const int led_05 = 6;
const int led_06 = 7;
const int led_07 = 8;
const int led_08 = 9;
const int led_09 = 10;
const int led_10 = 11;
const int led_11 = 12;
const int led_12 = 13;

int period = 100;


/*
   SETUP
*/
void setup() {
  pinMode(led_01, OUTPUT);
  pinMode(led_02, OUTPUT);
  pinMode(led_03, OUTPUT);
  pinMode(led_04, OUTPUT);
  pinMode(led_05, OUTPUT);
  pinMode(led_06, OUTPUT);
  pinMode(led_07, OUTPUT);
  pinMode(led_08, OUTPUT);
  pinMode(led_09, OUTPUT);
  pinMode(led_10, OUTPUT);
  pinMode(led_11, OUTPUT);
  pinMode(led_12, OUTPUT);

}

/*
   LOOP
*/
void loop() {

  digitalWrite(led_01, HIGH);
  delay(period);
  digitalWrite(led_01, LOW);

  digitalWrite(led_02, HIGH);
  delay(period);
  digitalWrite(led_02, LOW);

  digitalWrite(led_03, HIGH);
  delay(period);
  digitalWrite(led_03, LOW);

  digitalWrite(led_04, HIGH);
  delay(period);
  digitalWrite(led_04, LOW);

  digitalWrite(led_05, HIGH);
  delay(period);
  digitalWrite(led_05, LOW);

  digitalWrite(led_06, HIGH);
  delay(period);
  digitalWrite(led_06, LOW);

  digitalWrite(led_07, HIGH);
  delay(period);
  digitalWrite(led_07, LOW);

  digitalWrite(led_08, HIGH);
    delay(period);
  digitalWrite(led_08, LOW);

  digitalWrite(led_09, HIGH);
    delay(period);
  digitalWrite(led_09, LOW);

  digitalWrite(led_10, HIGH);
    delay(period);
  digitalWrite(led_10, LOW);

  digitalWrite(led_11, HIGH);
    delay(period);
  digitalWrite(led_11, LOW);

  digitalWrite(led_12, HIGH);
    delay(period);
  digitalWrite(led_12, LOW);

}
