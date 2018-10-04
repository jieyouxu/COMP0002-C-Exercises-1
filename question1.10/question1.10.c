#include "../graphics/graphics.h"

void drawAxis(void) {
    drawLine(50, 50, 50, 250);
    drawLine(50, 250, 300, 250);
}

void drawYAxisNumbers(void) {
    drawString("150", 20, 100);
    drawString("100", 20, 150);
    drawString("50", 20, 200);
    drawString("0", 20, 250);
}

void drawYAxisTicks(void) {
    drawLine(47, 100, 50, 100);
    drawLine(47, 150, 50, 150);
    drawLine(47, 200, 50, 200);
    drawLine(47, 250, 50, 250);
}

void drawBars(void) {
    setColour(blue);
    fillRect(50, 190, 50, 60);
    setColour(green);
    fillRect(100, 110, 50, 140);
    setColour(red);
    fillRect(150, 130, 50, 120);
    setColour(yellow);
    fillRect(200, 155, 50, 95);
    setColour(magenta);
    fillRect(250, 110, 50, 140);
    setColour(black);
}

int main(void) {
    drawAxis();
    drawYAxisNumbers();
    drawYAxisTicks();
    drawBars();
}