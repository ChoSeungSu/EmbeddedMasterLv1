#include "../led/Common/common.h"
#include "../led/Entity/led.h"
#include "../led/Repository/avr.h"
#include <unistd.h>


int main(void)
{
    led_entity_init(PIN_PORT5, LED_OFF);
    pin_direct(led);


    while(1)
    {
        set_led_status(LED_OFF);
        pin_set(led);
        _delay_ms(500);

        set_led_status((LED_ON);
        pin_set(led);
        _delay_ms(500);
    }

    return 0;
}
