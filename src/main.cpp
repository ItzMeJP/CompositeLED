#include <CompositeLED.h>

using namespace XXX;

CompositeLED my_led_comp(2, 3, 5,CompositeLED::LED_TYPE::RGB, LED::STATE_TYPE::ACTIVE_HIGH);

void setup()
{
}

unsigned long last = millis();

void loop()
{

  if (millis() - last > 8000 && millis() - last <12000)
  {
    my_led_comp.setColor(CompositeLED::COLOR::RED);
  }
  else if (millis() - last > 4000 && millis() - last <8000)
  {
    my_led_comp.setBlink(CompositeLED::COLOR::YELLOW, 125);
  }
  else if (millis() - last > 12000 && millis() - last <16000)
  {
    my_led_comp.setColor(CompositeLED::COLOR::BLUE);
  }
  else if (millis() - last > 16000 && millis() - last <20000)
  {
    my_led_comp.setBlink(CompositeLED::COLOR::WHITE, 500);
  }
  else if (millis() - last > 20000)
  {
    my_led_comp.setColor(CompositeLED::COLOR::BLANK);
  }
  else
  {
    my_led_comp.setBlink(CompositeLED::COLOR::GREEN, 500);
  }

  my_led_comp.tick();

}