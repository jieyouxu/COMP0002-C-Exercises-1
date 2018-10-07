#include <math.h>

#include "../graphics/graphics.h"

#define PI 3.14159265358979

// Polar form of a Complex number
typedef struct ComplexNumber {
    double modulus;
    double argument;
} ComplexNumber;

static ComplexNumber c = {
    .modulus = 1.0, 
    .argument = 0
};

typedef struct Point {
    double x;
    double y;
} Point;

#define EDGES 7
#define SCALE_FACTOR 100
#define OFFSET_X 250
#define OFFSET_Y 150

static Point heptagonPoints[EDGES];

void calculateHeptagonPoints() {
    for (int k = 0; k < EDGES; k++) {
        double x_coordinate = cos((2*k*PI)/7);
        double y_coordinate = sin((2*k*PI)/7);

        heptagonPoints[k].x = x_coordinate;
        heptagonPoints[k].y = y_coordinate;
    }
}

void scaleUpHeptagonPoints() {
    for (int k = 0; k < EDGES; k++) {
        heptagonPoints[k].x *= SCALE_FACTOR;
        heptagonPoints[k].y *= SCALE_FACTOR;
    }
}

void offsetHeptagonPoints() {
    for (int k = 0; k < EDGES; k++) {
        heptagonPoints[k].x += OFFSET_X;
        heptagonPoints[k].y += OFFSET_Y;
    }
}

void drawLastEdge() {
    Point startingPoint = heptagonPoints[0];
    Point endingPoint = heptagonPoints[EDGES - 1];
    drawLine(startingPoint.x, startingPoint.y, endingPoint.x, endingPoint.y);
}

void drawHeptagon() {
    for (int k = 0; k < EDGES - 1; k++) {
        Point p1 = heptagonPoints[k];
        Point p2 = heptagonPoints[k+1];
        drawLine(p1.x, p1.y, p2.x, p2.y);
    }

    drawLastEdge();
}

int main(void) {
    calculateHeptagonPoints();
    scaleUpHeptagonPoints();
    offsetHeptagonPoints();
    drawHeptagon();

    return 0;
}