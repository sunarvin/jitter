
/*
 * Author: Arvin Sun
 * E-mail: sunarvin@hotmail.com
 *
 * You use at your own risk. The author is not responsible for any loss or damage the program involved.
 *
 * MIT license, all text above must be included in any redistribution.
 */

#include <assert.h>

#include "noise_filter.h"

static int _noise_filter3(int bits) {
    const static int _3table[NF3_MASK+1] = {
          NF3_LOW       /* NF3_0 */
        , NF3_LOW       /* NF3_1 */
        , NF3_UNSTABLE  /* NF3_2 */
        , NF3_HIGH      /* NF3_3 */
        , NF3_LOW       /* NF3_4 */
        , NF3_UNSTABLE  /* NF3_5 */
        , NF3_HIGH      /* NF3_6 */
        , NF3_HIGH      /* NF3_7 */
    };

    return _3table[bits & NF3_MASK];
}

static int _noise_filter4(int bits) {
    const static int _4table[NF4_MASK+1] = {
          NF4_LOW       /* NF4_00 */
        , NF4_LOW       /* NF4_01 */
        , NF4_LOW       /* NF4_02 */
        , NF4_HIGH      /* NF4_03 */
        , NF4_LOW       /* NF4_04 */
        , NF4_UNSTABLE  /* NF4_05 */
        , NF4_UNSTABLE  /* NF4_06 */
        , NF4_HIGH      /* NF4_07 */
        , NF4_LOW       /* NF4_08 */
        , NF4_UNSTABLE  /* NF4_09 */
        , NF4_UNSTABLE  /* NF4_10 */
        , NF4_HIGH      /* NF4_11 */
        , NF4_LOW       /* NF4_12 */
        , NF4_HIGH      /* NF4_13 */
        , NF4_HIGH      /* NF4_14 */
        , NF4_HIGH      /* NF4_15 */
    };

    return _4table[bits & NF4_MASK];
}

static int _noise_filter5(int bits) {
    const static int _5table[NF5_MASK+1] = {
          NF5_LOW       /* NF5_00 */
        , NF5_LOW       /* NF5_01 */
        , NF5_LOW       /* NF5_02 */
        , NF5_LOW       /* NF5_03 */
        , NF5_LOW       /* NF5_04 */
        , NF5_UNSTABLE  /* NF5_05 */
        , NF5_UNSTABLE  /* NF5_06 */
        , NF5_HIGH      /* NF5_07 */
        , NF5_LOW       /* NF5_08 */
        , NF5_UNSTABLE  /* NF5_09 */
        , NF5_UNSTABLE  /* NF5_10 */
        , NF5_HIGH      /* NF5_11 */
        , NF5_LOW       /* NF5_12 */
        , NF5_UNSTABLE  /* NF5_13 */
        , NF5_HIGH      /* NF5_14 */
        , NF5_HIGH      /* NF5_15 */
        , NF5_LOW       /* NF5_16 */
        , NF5_LOW       /* NF5_17 */
        , NF5_UNSTABLE  /* NF5_18 */
        , NF5_HIGH      /* NF5_19 */
        , NF5_LOW       /* NF5_20 */
        , NF5_UNSTABLE  /* NF5_21 */
        , NF5_UNSTABLE  /* NF5_22 */
        , NF5_HIGH      /* NF5_23 */
        , NF5_LOW       /* NF5_24 */
        , NF5_UNSTABLE  /* NF5_25 */
        , NF5_UNSTABLE  /* NF5_26 */
        , NF5_HIGH      /* NF5_27 */
        , NF5_HIGH      /* NF5_28 */
        , NF5_HIGH      /* NF5_29 */
        , NF5_HIGH      /* NF5_30 */
        , NF5_HIGH      /* NF5_31 */
    };

    return _5table[bits & NF5_MASK];
}

int noise_filter(int width, int bits) {
    if (width == NF3_WIDTH) {
        return _noise_filter3(bits);
    } else if (width == NF4_WIDTH) {
        return _noise_filter4(bits);
    } else if (width == NF5_WIDTH) {
        return _noise_filter5(bits);
    } else {
        assert(0);
        return NF_UNSTABLE; /* This should never happen! */
    }
}

