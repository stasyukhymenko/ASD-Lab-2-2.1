#include <stdio.h>
#include <math.h>
#include <windows.h>

double summ = 0.0;

double recursiveCombined(double x, int i, int n, double product) {
    
    if (i == n + 1) {
        return summ + 1;
    }
    else {
        product *= (x * x) / (4 * i * i - 2 * i);
        summ = recursiveCombined(x, i + 1, n, product);
    }
    summ += product;
    return summ;
}