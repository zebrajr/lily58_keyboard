#pragma once

#include "quantum.h"

#ifdef OLED_ENABLE

void render_wpm(void);

#else

static inline void render_wpm(void) {}

#endif
