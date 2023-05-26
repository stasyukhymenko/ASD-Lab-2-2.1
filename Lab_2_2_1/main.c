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

	printf("������ x: ");
	scanf_s("%lf", &x);
	printf("������ ������� ��������� (n): ");
	scanf_s("%d", &n);
	printf("\n");
	if (n > 0) {
		resultMath = cosh(x);

		resultDescent = recursiveDescent(x, n, 1, 1, 1);
		printf("��������� ���� ���������� ������� ������������ ������: \t\t%lf; ������� ������� cosh(x): %lf\n\n", resultDescent, resultMath - resultDescent);

		resultReturn = recursiveReturn(x, n);
		printf("��������� ���� ���������� ������� ������������ ����������: \t\t%lf; ������� ������� cosh(x): %lf\n\n", SUMM, resultMath - SUMM);

		resultCombined = recursiveCombined(x, 1, n, 1);
		printf("��������� ���� ���������� ������� ������������ ������ �� ����������: \t%lf; ������� ������� cosh(x): %lf\n\n", resultCombined, resultMath - resultCombined);

		resultLoop = recursiveLoop(x, n);
		printf("��������� ���� ���������� �� ��������� �����: \t\t\t\t%lf; ������� ������� cosh(x): %lf\n\n", resultLoop, resultMath - resultLoop);

		printf("��������� ���� ���������� �� ��������� <math.h> (������� cosh(x)): \t%lf\n", resultMath);
	}
	else
		printf("n �� ���� ����� 0");
	return 1;
}