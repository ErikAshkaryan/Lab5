#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#define _USE_MATH_DEFINES
#define P 3.14159265358979323846

void main()
{
	float r1, r2;
	double x, y, z;
	setlocale(LC_ALL, "RUS");
	puts("Введите значения x, y, z");
	scanf("%lf %lf %lf", &x, &y, &z);
	r1 = (2 * cos(x - P / 6)) / (0.5 + pow(sin(y), 2));
	r2 = (1 + (pow(z, 2) / (3 - pow(z, 2) / 5)));
	printf("Значение t = %lf", r1 * r2);


}
