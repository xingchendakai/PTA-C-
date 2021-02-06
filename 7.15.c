#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//¼ÆËãÔ²ÖÜÂÊ
	double x, s = 1, z = 1, i, j = 1;
	scanf("%lf", &x);
	for (i = 1; j / z >= x; i++)
	{
		z = z * (2 * i + 1);
		j *= i;
		s += j / z;
	}
	printf("%.6lf", s * 2);
	return 0;
}