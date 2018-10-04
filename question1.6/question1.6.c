#include "../graphics/graphics.h"

int main(void) {
    drawRect(150, 100, 100, 100);
    int width = (int) 70.71*2;
    int height = width;
    drawArc(129, 79, width, height, 0, 360);
}