/**
   MakerNano

   Use interrupt pin.
*/

const byte led_pin = 13;
const byte btn_pin = 2;
volatile byte led_state = HIGH;

void setup()
{
  pinMode(led_pin, OUTPUT);
  pinMode(btn_pin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(btn_pin), deltaled, FALLING);
}

void loop()
{
  digitalWrite(led_pin, led_state);
}

void deltaled() 
{
  led_state = !led_state;
}
