/*
 * main.c
 *
 *  Created on: Nov 16, 2019
 *      Author: gabolaev
 */

#include "stdio.h"
#include "usbstk5515.h"
#include "usbstk5515_led.h"
#include "aic_func.h"
#include "sar.h"

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  main( )                                                                 *
 *                                                                          *
 * ------------------------------------------------------------------------ */

Uint8 listeningMode(char * msg) {
    USBSTK5515_ULED_setall(15);
    initLCD();
    clear_disp();
    switchToUpperRow();
    printWord(msg);
    switchToLowerRow();
    printWord("boosted    source");
    int uledj = 0;
    while (1) {
        switch (Get_Sar_Key()){
        case SW1:
            clear_row();
            printWord("boost mode");
            return 1;
        case SW2:
            clear_row();
            printWord("source mode");
            return 2;
        }
        USBSTK5515_ULED_toggle(uledj);
        USBSTK5515_ULED_toggle(uledj-1);
        USBSTK5515_waitusec(40000);
        if (uledj == 4) {
            uledj=0;
        } else {
            uledj++;
        }
    }
}

void main( void ) {
    USBSTK5515_init( );
    Uint8 enableFilter = listeningMode("preview mode");
    switchToUpperRow();
    printWord("Listening 10 sec");
    AIC_init();
    stream_v2(enableFilter);
    SW_BREAKPOINT;
}
