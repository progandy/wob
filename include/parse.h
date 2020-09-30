#ifndef _WOB_PARSE_H
#define _WOB_PARSE_H

#include <stdbool.h>

#include "color.h"

bool wob_parse_color(const char *restrict str, char **restrict str_end, struct wob_color *color);

bool wob_parse_input(const char *input_buffer, unsigned long *percentage, unsigned long *img, struct wob_color *background, struct wob_color *border, struct wob_color *bar);

#endif
