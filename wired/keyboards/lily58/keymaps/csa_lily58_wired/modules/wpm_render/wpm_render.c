#include "wpm_render.h"
#include "oled_driver.h"
#include "wpm.h"

#ifdef OLED_ENABLE
void render_wpm(void) {
    uint8_t current_wpm = get_current_wpm();
    if (current_wpm > 0) {
        char wpm_str[4];
        snprintf(wpm_str, sizeof(wpm_str), "%03d", current_wpm);
        oled_write(wpm_str, false);
        oled_advance_page(false);
    }
}
#endif
