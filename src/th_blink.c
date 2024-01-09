#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

extern const struct gpio_dt_spec led;
void th_blink();

K_THREAD_DEFINE(th_blink_id, 512, th_blink, NULL, NULL, NULL, 5, 0, 0);

void th_blink()
{
    int i;
    while (1)
    {
        for (i = 0; i < 6; i++)
        {
            gpio_pin_toggle_dt(&led);
            k_msleep(50);
        }
        gpio_pin_set_dt(&led, 0);

        k_msleep(1000);
    }
}

