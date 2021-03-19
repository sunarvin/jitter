
/*
 * Author: Arvin Sun
 * E-mail: sunarvin@hotmail.com
 *
 * You use at your own risk. The author is not responsible for any loss or damage the program involved.
 *
 * MIT license, all text above must be included in any redistribution.
 */

#include <assert.h>
#include <stdio.h>

#include "noise_filter.h"


void show_bits(int width, int bits) {
    int mask = 0;

    assert(width > 1);

    mask = 0x1 << (width - 1);

    while (mask > 0) {
        if ((mask & bits) != 0) {
            putchar('1');
        } else {
            putchar('0');
        }
        mask >>= 1;
    }
}

void show_nf3(void) {
    int bits = 0;
    int width = 3;
    int result = 0;

    printf("NoiseFilter3:\n");
    for (bits=0; bits<=NF3_MASK; bits++) {
        printf("  NF3_");
        show_bits(width, bits);
        result = noise_filter(width, bits);
        if (result == NF3_LOW) {
            printf(" LOW\n");
        } else if (result == NF3_HIGH) {
            printf(" HIGH\n");
        } else if (result == NF3_UNSTABLE) {
            printf(" UNSTABLE\n");
        } else {
            printf(" ERROR!\n");
        }
    }
    putchar('\n');
}

void show_nf4(void) {
    int bits = 0;
    int width = 4;
    int result = 0;

    printf("NoiseFilter4:\n");
    for (bits=0; bits<=NF4_MASK; bits++) {
        printf("  NF4_");
        show_bits(width, bits);
        result = noise_filter(width, bits);
        if (result == NF4_LOW) {
            printf(" LOW\n");
        } else if (result == NF4_HIGH) {
            printf(" HIGH\n");
        } else if (result == NF4_UNSTABLE) {
            printf(" UNSTABLE\n");
        } else {
            printf(" ERROR!\n");
        }
    }
    putchar('\n');
}

void show_nf5(void) {
    int bits = 0;
    int width = 5;
    int result = 0;

    printf("NoiseFilter5:\n");
    for (bits=0; bits<=NF5_MASK; bits++) {
        printf("  NF5_");
        show_bits(width, bits);
        result = noise_filter(width, bits);
        if (result == NF5_LOW) {
            printf(" LOW\n");
        } else if (result == NF5_HIGH) {
            printf(" HIGH\n");
        } else if (result == NF5_UNSTABLE) {
            printf(" UNSTABLE\n");
        } else {
            printf(" ERROR!\n");
        }
    }
    putchar('\n');
}

