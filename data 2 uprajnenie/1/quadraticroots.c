#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"

struct QuadraticRootsResult findroots(double a, double b, double c) {
    struct QuadraticRootsResult result;

    double D = b * b - (4 * a * c);
    printf("%lf", a);
    printf("%lf", b);
    printf("%lf", c);
    if (D < 0) {
        result.norealroots = '1'; 
        return result;
    } else if (D == 0) {
        result.norealroots = '0'; 
        result.x1 = (-b + sqrt(D)) / (2 * a);
        result.x2 = result.x1;
        return result;
    } else {
        result.norealroots = '0'; 
        result.x1 = (-b + sqrt(D)) / (2 * a);
        result.x2 = (-b - sqrt(D)) / (2 * a);
        return result;
    }
}
