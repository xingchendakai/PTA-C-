#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k;
	char c;
	scanf("%d %c %d", &i, &c, &j);
	if (c == '+')
	{
		k = i + j;
		printf("%d", k);
	}
	else if (c == '-')
	{
		k = i - j;
		printf("%d", k);
	}
	else if (c == '*')
	{
		k = i * j;
		printf("%d", k);
	}
	else if (c == '/' && j != 0)
	{
		k = i / j;
		printf("%d", k);
	}
	else if (c == '%' && j != 0)
	{
		k = i % j;
		printf("%d", k);
	}
	else
		printf("ERROR");
	return 0;
}