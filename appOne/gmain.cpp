#define _MIX
#ifdef _MARU
#include"libOne.h"
#include"bubble_ART.h"
void gmain() {
    window(1920, 1080,full);
    hideCursor();
    BUBBLE_ART bubble;
    while (notQuit) {
        clear();
        bubble.perform();
    }
}
#endif
#ifdef _RAIN
#include"libOne.h"
#include"RAIN_ART.h"
void gmain() {
    window(1920, 1080);
    hideCursor();
    RAIN_ART rain;
    while (notQuit) {
        clear();
        rain.perform();
    }
}
#endif
#ifdef _SQUARE
#include"libOne.h"
#include"SQURE_ART.h"
void gmain() {
    window(1920, 1080, full);
    hideCursor();
    SQUARE_ART square;
    while (notQuit) {
        square.perform();
    }
}
#endif
#ifdef _MIX
#include"libOne.h"
#include"SQURE_ART.h"
#include"RAIN_ART.h"
#include"bubble_ART.h"
void gmain() {
    window(1920, 1080, full);
    hideCursor();
    int i = 0;
    int num = 3;
    ART* art = new BUBBLE_ART;
    while (notQuit) {
        if (isTrigger(KEY_SPACE)) {
            delete art;
            ++i %= num;
            if (i == 0)art = new BUBBLE_ART;
            else if (i == 1)art = new RAIN_ART;
            else if (i == 2)art = new SQUARE_ART;
        }
       art->perform();
    }
    delete art;
}
#endif
