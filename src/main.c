#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/i2c.h>
#include <zephyr/logging/log.h>

const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(DT_NODELABEL(led), gpios);

LOG_MODULE_REGISTER(main);

int main(void)
{
    gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);

    LOG_INF("boot");

    while (1)
    {
        k_msleep(200);
    }

    return 0;
}

