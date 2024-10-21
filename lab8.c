#include <stdio.h>
#include <locale.h>
#include <math.h>
void main() {
	//1
	setlocale(LC_CTYPE, "RUS");
	int n, m;
	int s = 0;
	int k = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = m; i >= n; i--) {
		s += i;
		printf("\nВыполнено %d раз", k++);
	}
	printf("\nРезультат %d", s);
	//2
	puts("\ny=x^3 - 4*x^2 + 2");
	puts("Введите значение х");
	int x, f;
	double y = 0;
	scanf("%i", &x);
	puts("Введите значение шага табуляции");
	scanf("%i", &f);
	for (double x1 = x; x1 <= 3 && x1 >= 1; x1 += f) {
		y = pow(x1, 3) - 4 * pow(x1, 2) + 2;
		puts("  -------------");
		printf("| %lf  |  %lf |", x1, y);
		puts("  -------------");
	}
	//3
	double b=0;
	for (double v = 1; v <= 2; v += 0.1) {
		b+=sin(v);
	}
	printf("Значение суммы синусов:%f", b);
}