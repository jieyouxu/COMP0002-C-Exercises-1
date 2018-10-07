#include <math.h>
#include <stdio.h>
#include "../graphics/graphics.h"

#define PI 3.14159265358979323846

void drawYAxis(void) {
    drawLine(50, 50, 50, 250);
}

void drawXAxis(void) {
    drawLine(50, 150, 450, 150);
}

double degreeToRadian(double degree) {
    return degree * (PI / 180);
}

static const int START_DEGREES = 0;
static const int END_DEGREES = 360;
#define TOTAL_POINTS_COUNT 360

typedef struct Point {
    double m_x;
    double m_y;
} Point;

static Point sineWavePoints[TOTAL_POINTS_COUNT];

void calculateSineWavePoints(void) {
    for (int x = START_DEGREES; x <= END_DEGREES; x++) {
        double x_in_radians = degreeToRadian(x);
        int y = (int) (sin(x_in_radians) * 100);
        
        sineWavePoints[x].m_x = x;
        sineWavePoints[x].m_y = y;
    }
}

void offsetSineWavePoints(void) {
    for (int x = START_DEGREES; x <= END_DEGREES; x++) {
        sineWavePoints[x].m_x += 50;
        sineWavePoints[x].m_y += 150;
    }
}

void drawSineWaveLineSegment(Point p1, Point p2) {
    drawLine(p1.m_x, p1.m_y, p2.m_x, p2.m_y);
}

void drawSineWave(void) {
    setColour(red);
    for (int i = 0; i < TOTAL_POINTS_COUNT - 1; i++) {
        drawSineWaveLineSegment(sineWavePoints[i], sineWavePoints[i+1]);
    }
    setColour(black);
}

void drawYLabels(void) {
    drawString("1", 30, 55);
    drawLine(45, 50, 50, 50);

    drawString("0", 30, 155);
    drawLine(45, 150, 50, 150);

    drawString("-1", 30, 255);
    drawLine(45, 250, 50, 250);
}

void drawXLabels(void) {
    drawString("180", 230, 165);
    drawString("360", 410, 165);
}

void drawSineWaveFormula(void) {
    setColour(red);
    drawString("y = sin(x)", 400, 50);
    setColour(black);
}

int main(void) {
    drawYAxis();
    drawXAxis();

    calculateSineWavePoints();
    offsetSineWavePoints();
    drawSineWave();

    drawYLabels();
    drawXLabels();

    drawSineWaveFormula();

    return 0;
}