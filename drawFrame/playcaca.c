#include <caca.h>
#include "common-image.h"

static void draw_checkers(int x, int y, int w, int h)
{
    int xn, yn;

    if(x + w > (int)caca_get_canvas_width(cv))
        w = caca_get_canvas_width(cv) - x;
    if(y + h > (int)caca_get_canvas_height(cv))
        h = caca_get_canvas_height(cv) - y;

    for(yn = y > 0 ? y : 0; yn < y + h; yn++)
        for(xn = x > 0 ? x : 0; xn < x + w; xn++)
    {
        if((((xn - x) / 5) ^ ((yn - y) / 3)) & 1)
            caca_set_color_ansi(cv, CACA_LIGHTGRAY, CACA_DARKGRAY);
        else
            caca_set_color_ansi(cv, CACA_DARKGRAY, CACA_LIGHTGRAY);
        caca_put_char(cv, xn, yn, ' ');
    }
}

int makeCaca() {
	caca_canvas_t *cv;
	caca_display_t *dp;
	caca_event_t ev;
	struct image *im = NULL;


	dp = caca_create_display(NULL);
	if (!dp) return 1;
	cv = caca_get_canvas(dp);

	caca_set_display_title(dp, "Hello!");
	caca_set_color_ansi(cv, CACA_BLACK, CACA_WHITE);
	caca_put_str(cv, 0, 0, "This is a message");
	caca_clear_canvas(cv);
	caca_refresh_display(dp);

	im = load_image("img1.jpg");

	float xdelta, ydelta;
	int y, height;

	float xfactor = 1.0, yfactor = 1.0
	height = caca_get_canvas_height(cv);

	xdelta = (xfactor > 1.0) ? dx : 0.5;
	ydelta = (yfactor > 1.0) ? dy : 0.5;

	draw_checkers(ww * (1.0 - xfactor) / 2,
				  y + height * (1.0 - yfactor) / 2,
				  ww * xfactor, height * yfactor);

	caca_dither_bitmap(cv, ww * (1.0 - xfactor) * xdelta,
					y + height * (1.0 - yfactor) * ydelta,
					ww * xfactor + 1, height * yfactor + 1,
					im->dither, im->pixels);

	caca_refresh_display(dp);


	/* exit */
	caca_get_event(dp, CACA_EVENT_KEY_PRESS, &ev, -1);
	caca_free_display(dp);


	return 0;
}

int main(int argc, char *argv[]) {
	makeCaca();
	return 0;
}
