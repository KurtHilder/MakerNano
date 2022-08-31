/**
   MakerNano

   Turn each led on and off, with a
   frequency based using period.
*/


//    VARIABLES

const int led_array[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int led_count = sizeof(led_array) / sizeof(int);
int period = 100;

void setup()
{
  for (int i = 0 ; i < led_count ; i++) {
    pinMode(led_array[i], OUTPUT);
  }
}

void loop()
{
  for (int i = 0 ; i < led_count ; i++) {
    digitalWrite(led_array[i], HIGH);
    delay(period);
    digitalWrite(led_array[i], LOW);
  }
}
