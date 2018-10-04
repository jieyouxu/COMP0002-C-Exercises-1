/**
 * First use De Moivre's Theorem to find the 7th roots of unity for (0+1i) so that the top point is centered horizontally.
 * The calculated results are:
 * (0+1i) => r = 1, theta = pi/4
 *  real part       imaginary part
 *  ==============================
 *  0.993712	    0.111964
 *  0.532032	    0.846724
 *  -0.330279	    0.943883
 *  -0.943883	    0.330279
 *  -0.846724	    -0.532032
 *  -0.111964	    -0.993712
 *  0.707107	    -0.707107
 *  ==============================
 * Then, let the real part and imaginary part be the corresponding x and y coordinates on the Cartesian plane.
 * The radius of the heptagon is only 1, so to be able to draw it properly it needs to be scaled up.
 * An arbitrary scale factor 50 is chosen and the coordinates are offset by 250 on x and 150 on y.
 *  x               y
 *  ==============================
 *  300	            156
 *  277	            192
 *  233	            197
 *  203	            167
 *  208	            123
 *  244	            100
 *  285	            115
 *  ==============================
 * 
 * TODO: implement heptagon drawing algorithm in C.
 */

#include "../graphics/graphics.h"

int main(void) {
    drawLine(300, 156, 277, 192);
    drawLine(277, 192, 233, 197);
    drawLine(233, 197, 203, 167);
    drawLine(203, 167, 208, 123);
    drawLine(208, 123, 244, 100);
    drawLine(244, 100, 285, 115);
    drawLine(285, 115, 300, 156);

    return 0;
}