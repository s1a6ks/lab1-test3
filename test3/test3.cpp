#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#include <cmath>

int main() {

    double x1 = 5;
    double x2 = 8;
    double x3 = 13;

    double y1 = 3;
    double y2 = 6;
    double y3 = 10;

    double sideAB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double sideBC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double sideCA = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    double angleA = acos((pow(sideBC, 2) + pow(sideCA, 2) - pow(sideAB, 2)) / (2 * sideBC * sideCA)) * 180 / M_PI;
    double angleB = acos((pow(sideCA, 2) + pow(sideAB, 2) - pow(sideBC, 2)) / (2 * sideCA * sideAB)) * 180 / M_PI;
    double angleC = 180 - angleA - angleB;

    printf("A: %.2lf degrees\n", angleA);
    printf("B: %.2lf degrees\n", angleB);
    printf("C: %.2lf degrees\n", angleC);

    return 0;
}






