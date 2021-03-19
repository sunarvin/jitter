
/*
 * Author: Arvin Sun
 * E-mail: sunarvin@hotmail.com
 *
 * You use at your own risk. The author is not responsible for any loss or damage the program involved.
 *
 * MIT license, all text above must be included in any redistribution.
 */

#ifndef __NOISE_FILTER_H__

#define __NOISE_FILTER_H__

#define NF_LOW          0
#define NF_HIGH         1
#define NF_UNSTABLE     (-1)

#define NF3_WIDTH       3
#define NF3_MASK        0x7
#define NF3_LOW         NF_LOW
#define NF3_HIGH        NF_HIGH
#define NF3_UNSTABLE    NF_UNSTABLE
#define NF3_000         0           /* NF3_0 */
#define NF3_001         1           /* NF3_1 */
#define NF3_010         2           /* NF3_2 */
#define NF3_011         3           /* NF3_3 */
#define NF3_100         4           /* NF3_4 */
#define NF3_101         5           /* NF3_5 */
#define NF3_110         6           /* NF3_6 */
#define NF3_111         7           /* NF3_7 */


#define NF4_WIDTH       4
#define NF4_MASK        0xF
#define NF4_LOW         NF_LOW
#define NF4_HIGH        NF_HIGH
#define NF4_UNSTABLE    NF_UNSTABLE
#define NF4_0000        0           /* NF4_00 */
#define NF4_0001        1           /* NF4_01 */
#define NF4_0010        2           /* NF4_02 */
#define NF4_0011        3           /* NF4_03 */
#define NF4_0100        4           /* NF4_04 */
#define NF4_0101        5           /* NF4_05 */
#define NF4_0110        6           /* NF4_06 */
#define NF4_0111        7           /* NF4_07 */
#define NF4_1000        8           /* NF4_08 */
#define NF4_1001        9           /* NF4_09 */
#define NF4_1010        10          /* NF4_10 */
#define NF4_1011        11          /* NF4_11 */
#define NF4_1100        12          /* NF4_12 */
#define NF4_1101        13          /* NF4_13 */
#define NF4_1110        14          /* NF4_14 */
#define NF4_1111        15          /* NF4_15 */


#define NF5_WIDTH       5
#define NF5_MASK        0x1F
#define NF5_LOW         NF_LOW
#define NF5_HIGH        NF_HIGH
#define NF5_UNSTABLE    NF_UNSTABLE
#define NF5_00000       0           /* NF5_00 */
#define NF5_00001       1           /* NF5_01 */
#define NF5_00010       2           /* NF5_02 */
#define NF5_00011       3           /* NF5_03 */
#define NF5_00100       4           /* NF5_04 */
#define NF5_00101       5           /* NF5_05 */
#define NF5_00110       6           /* NF5_06 */
#define NF5_00111       7           /* NF5_07 */
#define NF5_01000       8           /* NF5_08 */
#define NF5_01001       9           /* NF5_09 */
#define NF5_01010       10          /* NF5_10 */
#define NF5_01011       11          /* NF5_11 */
#define NF5_01100       12          /* NF5_12 */
#define NF5_01101       13          /* NF5_13 */
#define NF5_01110       14          /* NF5_14 */
#define NF5_01111       15          /* NF5_15 */
#define NF5_10000       16          /* NF5_16 */
#define NF5_10001       17          /* NF5_17 */
#define NF5_10010       18          /* NF5_18 */
#define NF5_10011       19          /* NF5_19 */
#define NF5_10100       20          /* NF5_20 */
#define NF5_10101       21          /* NF5_21 */
#define NF5_10110       22          /* NF5_22 */
#define NF5_10111       23          /* NF5_23 */
#define NF5_11000       24          /* NF5_24 */
#define NF5_11001       25          /* NF5_25 */
#define NF5_11010       26          /* NF5_26 */
#define NF5_11011       27          /* NF5_27 */
#define NF5_11100       28          /* NF5_28 */
#define NF5_11101       29          /* NF5_29 */
#define NF5_11110       30          /* NF5_30 */
#define NF5_11111       31          /* NF5_31 */


int noise_filter(int width, int bits);

#endif /* __NOISE_FILTER_H__ */

