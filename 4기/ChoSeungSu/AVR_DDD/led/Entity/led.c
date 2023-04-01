#include "led.h"

void led_entity_init(PIN_MAP pin_map, LED_STATUS status)
{
    led.pin = pin_map;
    led.status = status;
} 

void set_led_status (LED_STATUS status)
{
    led.status = status;
}

