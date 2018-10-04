#include "../graphics/graphics.h"

int main(void) {
    drawLine(30, 30, 120, 30);
    drawLine(120, 30, 120, -20);
    drawLine(120, -20, 30, -20);
    drawLine(30, -20, 30, 30);

    drawRect(150, 50, 60, 140);
}