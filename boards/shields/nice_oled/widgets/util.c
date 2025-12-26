#include "util.h"
#include <ctype.h>
#include <zephyr/kernel.h>

#define TERMS 7
#define PI 3.14159

float power(float base, int exp) {
  if (exp < 0) {
    if (base == 0)
      return -0; // Error!!
    return 1 / (base * power(base, (-exp) - 1));
  }
  if (exp == 0)
    return 1;
  if (exp == 1)
    return base;
  return base * power(base, exp - 1);
}

int fact(int n) { return n <= 0 ? 1 : n * fact(n - 1); }

float sin(int deg) {
  deg %= 360; // make it less than 360
  float rad = deg * PI / 180;
  float sin = 0;

  int i;
  for (i = 0; i < TERMS; i++) { // That's Taylor series!!
    sin += power(-1, i) * power(rad, 2 * i + 1) / fact(2 * i + 1);
  }
  return sin;
}

float cos(int deg) {
  deg %= 360; // make it less than 360
  float rad = deg * PI / 180;
  float cos = 0;

  int i;
  for (i = 0; i < TERMS; i++) { // That's also Taylor series!!
    cos += power(-1, i) * power(rad, 2 * i) / fact(2 * i);
  }
  return cos;
}

void to_uppercase(char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = toupper(str[i]);
  }
}

void rotate_canvas(lv_obj_t *canvas, lv_color_t cbuf[]) {
  static lv_color_t cbuf_tmp[CANVAS_HEIGHT * CANVAS_HEIGHT];
  memcpy(cbuf_tmp, cbuf, sizeof(cbuf_tmp));

  lv_img_dsc_t img;
  img.data = (void *)cbuf_tmp;
  img.header.cf = LV_IMG_CF_TRUE_COLOR;
  img.header.w = CANVAS_HEIGHT;
  img.header.h = CANVAS_HEIGHT;

  lv_canvas_fill_bg(canvas, LVGL_BACKGROUND, LV_OPA_COVER);
  lv_canvas_transform(canvas, &img, 900, LV_IMG_ZOOM_NONE, -1, 0,
                      CANVAS_HEIGHT / 2, CANVAS_HEIGHT / 2, false);
}

void draw_background(lv_obj_t *canvas) {
  lv_draw_rect_dsc_t rect_black_dsc;
  init_rect_dsc(&rect_black_dsc, LVGL_BACKGROUND);

  lv_canvas_draw_rect(canvas, 0, 0, CANVAS_WIDTH, CANVAS_HEIGHT,
                      &rect_black_dsc);
}

void init_label_dsc(lv_draw_label_dsc_t *label_dsc, lv_color_t color,
                    const lv_font_t *font, lv_text_align_t align) {
  lv_draw_label_dsc_init(label_dsc);
  label_dsc->color = color;
  label_dsc->font = font;
  label_dsc->align = align;
}

void init_rect_dsc(lv_draw_rect_dsc_t *rect_dsc, lv_color_t bg_color) {
  lv_draw_rect_dsc_init(rect_dsc);
  rect_dsc->bg_color = bg_color;
}

void init_line_dsc(lv_draw_line_dsc_t *line_dsc, lv_color_t color,
                   uint8_t width) {
  lv_draw_line_dsc_init(line_dsc);
  line_dsc->color = color;
  line_dsc->width = width;
}
