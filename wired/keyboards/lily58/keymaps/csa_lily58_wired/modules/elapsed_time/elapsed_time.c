#include "elapsed_time.h"
#include "oled_driver.h"
#include "timer.h"

#ifdef OLED_ENABLE
static uint32_t seconds = 0;
static uint32_t minutes = 0;
static uint32_t hours = 0;

void elapsed_time_update(void) {
    static uint32_t last_tick = 0;
    uint32_t current_tick = timer_read32();

    if (current_tick - last_tick >= 1000) {
        last_tick = current_tick;
        seconds++;

        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            if (minutes >= 60) {
                minutes = 0;
                hours++;
            }
        }
    }
}

void render_elapsed_time(void) {
    char buffer[20];

    if (hours > 0) {
        snprintf(buffer, sizeof(buffer), "%lu\n", hours);
        oled_write(buffer, false);
    }

    if (minutes > 0 || hours > 0) {
        snprintf(buffer, sizeof(buffer), "%lu\n", minutes);
        oled_write(buffer, false);
    }

    snprintf(buffer, sizeof(buffer), "%lu", seconds);
    oled_write(buffer, false);
    oled_advance_page(false);
}
#endif
