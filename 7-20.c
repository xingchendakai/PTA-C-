#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int i, j;
	scanf("%d", &n);
	for (i = 1,j=1; i <= n; j++)
	{
		int z = 1;
		for (; z <= j; z++)
		{
			printf("%d*%d=%-4d", z, j,z*j);
		}
		i++;
		printf("\n");
	}
	return 0;
}