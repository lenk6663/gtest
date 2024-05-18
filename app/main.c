#include <stdio.h>
#include "Square.h"


int main()
{
    double array[2];
    calculateRoots(array,1,-4,4);
    printf("%.1f %.1f\n", array[0], array[1]);

}
