#include <stdio.h>
#include <math.h>
#include <windows.h>

#include "functionProto.h"

double SUMM = 0.0;

double recursiveReturn(double x, int n) {

    double i = -1;
    if (n == 0) {
        i = 1;
    }
    else {
        i = recursiveReturn(x, n - 1) * x * x / (4.0 * n * n - 2.0 * n);
    }
    SUMM += i;
    return i;
}