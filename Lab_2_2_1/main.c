#include <stdio.h>
#include <math.h>
#include <windows.h>

#include "functionProto.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	double x;

	double resultDescent;
	double resultReturn;
	double resultCombined;
	double resultLoop;
	double resultMath;
	double measurementError;

	printf("Enter x: ");
	scanf_s("%lf", &x);
	printf("Enter the number of repetitions (n): ");
	scanf_s("%d", &n);
	printf("\n");
	if (n > 0) {
		resultMath = cosh(x);

		resultDescent = recursiveDescent(x, n, 1, 1, 1);
		printf("Result after recursive descent method: \t\t%lf; Measurement error according to cosh(x): %lf\n\n", resultDescent, resultMath - resultDescent);

		resultReturn = recursiveReturn(x, n);
		printf("Result after recursive return method: \t\t%lf; Measurement error according to cosh(x): %lf\n\n", SUMM, resultMath - SUMM);

		resultCombined = recursiveCombined(x, 1, n, 1);
		printf("Result after combined method: \t\t\t%lf; Measurement error according to cosh(x): %lf\n\n", resultCombined, resultMath - resultCombined);

		resultLoop = recursiveLoop(x, n);
		printf("Result after loop: \t\t\t\t%lf; Measurement error according to cosh(x): %lf\n\n", resultLoop, resultMath - resultLoop);

		printf("Result after <math.h> (cosh(x) function): \t%lf\n", resultMath);
	}
	else
		printf("n must be greater than 0");
	return 1;
}
