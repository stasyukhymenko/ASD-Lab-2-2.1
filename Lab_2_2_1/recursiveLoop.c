#include <stdio.h>
#include <math.h>
#include <windows.h>

double recursiveLoop(double x, int n) {
    double product, summ;
    product = summ = 1;

    for (int i = 1; i <= n; i++) {
        product *= (x * x) / (4 * i * i - 2 * i);
        summ += product;
    }
    return summ;
}
