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
  Serial.begin(9600);
  delay(1000);
  Serial.print("Pins: ");
  
  Serial.println(led_count);
  
  for (int i = 0 ; i < led_count ; i++) {
    pinMode(led_array[i], OUTPUT);
    Serial.print(i);
    Serial.print(" - D");
    Serial.print(led_array[i]);
    Serial.println(" is ready");
  }

}
int loopCount = 0;
void loop()
{
  loopCount++;
  Serial.print(loopCount);
  Serial.print(" - ");
  for (int i = 0 ; i < led_count ; i++) {
    
    Serial.print("D");
    Serial.print(led_array[i]);
    digitalWrite(led_array[i], HIGH);
    
    delay(period);
    digitalWrite(led_array[i], LOW);
    Serial.print(",");
  }
  Serial.println();

}
