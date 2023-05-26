#include <stdio.h>
#include <math.h>
#include <windows.h>

double recursiveDescent(double x, int n, double product, double summ, int i) {

    if (n == 0) {
        return summ;
    }
    else {
        product *= (x * x) / (4 * i * i - 2 * i);
        summ += product;
        summ = recursiveDescent(x, n - 1, product, summ, i + 1);
    }
    return summ;
}