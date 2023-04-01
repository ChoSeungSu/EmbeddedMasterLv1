#include "avr.h"

void pin_direct (led_object led_pin)
{
    PIN_MAP pin_map = led_pin.pin;

    DDRB = 1 << pin_map;

void pin_set(led_object led_pin)
{
    LED_STATUS status = led_pin.status;
    PIN_MAP pin_map = led_pin.pin;

    PORTB = status << pin_map; 
}