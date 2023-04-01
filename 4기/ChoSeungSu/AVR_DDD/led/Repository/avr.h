#ifndef __AVR_H__
#define __AVR_H__

#include "../Service/pin.h"
#include "../Entity/led.h"
#include "../Common/common.h"

void pin_direct (led_object led_pin);
void pin_set(led_object led_pin);


typedef enum _PIN_MAP
{
    //PORTB
    PIN_PORT0 = 0,
    PIN_PORT1,
    PIN_PORT2,
    PIN_PORT3,
    PIN_PORT4,
    PIN_PORT5,
    PIN_PORT6,
    PIN_PORT7

}PIN_MAP;


#endif