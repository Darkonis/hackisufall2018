// Project1.cpp : Defines the exported functions for the DLL application.
//
#include "stdafx.h"
#include <utility>
#include <limits.h>
#include "example.h"
#include <caca.h> 
//C:\Users\flame\AppData\Local\Packages\CanonicalGroupLimited.UbuntuonWindows_79rhkp1fndgsc\LocalState\rootfs\usr\include;
//#include "example.h"
int makeCaca() {
	caca_canvas_t *cv;
	caca_display_t *dp;
	caca_event_t ev;

	dp = caca_create_display(NULL);
	if (!dp) return 1;
	cv = caca_get_canvas(dp);

	caca_set_display_title(dp, "Hello!");
	caca_set_color_ansi(cv, CACA_BLACK, CACA_WHITE);
	caca_put_str(cv, 0, 0, "This is a message");
	caca_refresh_display(dp);
	caca_get_event(dp, CACA_EVENT_KEY_PRESS, &ev, -1);
	caca_free_display(dp);


	return 0;
}

int DllMain(void) {
	return 1;
}

//testing
