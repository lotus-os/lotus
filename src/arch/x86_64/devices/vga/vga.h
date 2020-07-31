#ifndef __VGA_H__
#define __VGA_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum vga_color {
	VGA_COLOR_BLACK = 0,
	VGA_COLOR_BLUE = 1,
	VGA_COLOR_GREEN = 2,
	VGA_COLOR_CYAN = 3,
	VGA_COLOR_RED = 4,
	VGA_COLOR_MAGENTA = 5,
	VGA_COLOR_BROWN = 6,
	VGA_COLOR_LIGHT_GREY = 7,
	VGA_COLOR_DARK_GREY = 8,
	VGA_COLOR_LIGHT_BLUE = 9,
	VGA_COLOR_LIGHT_GREEN = 10,
	VGA_COLOR_LIGHT_CYAN = 11,
	VGA_COLOR_LIGHT_RED = 12,
	VGA_COLOR_LIGHT_MAGENTA = 13,
	VGA_COLOR_LIGHT_BROWN = 14,
	VGA_COLOR_WHITE = 15
};

void vga_init();
void vga_disable();

void vga_putchar(char c);

uint8_t vga_merge_color(enum vga_color foreground_color, enum vga_color background_color);
void vga_set_color(uint8_t color);

void vga_set_cursor_pos(unsigned int x, unsigned int y);
void vga_get_cursor_pos(unsigned int* x, unsigned int* y);

#ifdef __cplusplus
}
#endif

#endif /* __VGA_H__ */