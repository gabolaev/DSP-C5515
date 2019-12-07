/*
 * streaming.c
 *
 *  Created on: Nov 16, 2019
 *      Author: gabolaev
 */


#include "stdio.h"
#include "usbstk5515.h"
#include "sar.h"
#include "fdacoefs.h"
#include "aic_func.h"
#include "dsplib.h"

#define Rcv 0x08
#define Xmit 0x20
#define ASIZE 61
Int16 in [ASIZE];

void stream_v2(Uint8 filterIsActive) {

    DATA dbuffer[LPL+2];
    Int16 right_in[1], left_in[1];
    Int16 right_out[1], left_out[1];

    Uint32 previewTime = 1000000;
    Uint32 i = 0;
    Uint8 lock = 0;
    while(1) {
        AIC_read2(right_in, left_in);
        if (filterIsActive == 1) {
            fir(left_in, LP, left_out, dbuffer, 1, LPL);
            fir(right_in, LP, right_out, dbuffer, 1, LPL);
        } else {
            left_out[0] = left_in[0];
            right_out[0] = right_in[0];
        }
        AIC_write2(right_out[0], left_out[0]);
        if (lock == 0) {
            if (i >= previewTime) {
                filterIsActive = listeningMode("choose mode");
                switchToUpperRow();
                clear_row();
                lock = 1;
            } else {
                i++;
            }
        }
        USBSTK5515_ULED_setall(0);
    }
}

