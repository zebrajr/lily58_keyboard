#pragma once
#include "quantum.h"

#ifdef OLED_ENABLE
void render_elapsed_time(void);
void elapsed_time_update(void);
#else
static inline void render_elapsed_time(void) {}
static inline void elapsed_time_update(void) {}
#endif
