#ifndef __LED_H__
#define __LED_H__

#include "../Common/common.h"
#include "../Repository/avr.h"

typedef enum
{
    LED_ON = 0,
    LED_OFF ,
    END

}LED_STATUS;

typedef struct _led_object
{
    LED_STATUS status;  
    PIN_MAP pin;  

}led_object ;

led_object led;


void led_entity_init(PIN_MAP pin_map, LED_STATUS status);
void set_led_status (LED_STATUS status);


#endif 

