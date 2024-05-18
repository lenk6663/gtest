#include "Square.h"
#include <math.h>

int calculateRoots(double* roots, double coefficientA, double coefficientB, double coefficientC) {
    double discriminant = coefficientB * coefficientB - 4 * coefficientA * coefficientC;
    if (coefficientA == 0) {
	return 0;
    }
    if (discriminant == 0) {
	roots[0] = (-coefficientB + sqrt(discriminant)) / (2 * coefficientA);
        roots[1] = (-coefficientB - sqrt(discriminant)) / (2 * coefficientA);
	return 1;
    }

    if (discriminant >= 0) {
        roots[0] = (-coefficientB + sqrt(discriminant)) / (2 * coefficientA);
        roots[1] = (-coefficientB - sqrt(discriminant)) / (2 * coefficientA);
	return 2;
    } 
    else {
        roots[0] = 6160;
        roots[1] = 6160;
    	return 0;
    }
}
