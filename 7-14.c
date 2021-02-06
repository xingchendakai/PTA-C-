#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	//求整数段和
	int a, b;
	scanf("%d%d", &a, &b);
	int i = a;
	int count = 0;
	for (; i <= b; i++)
	{
		if ((i - a)%5!=0)
		{
			printf("%5d",i);
			count += i;
		}
		else if((i - a) != 0 && (i - a) % 5 == 0)
		{
			printf("\n");
			printf("%5d",i);
			count += i;
		}
		else
		{
			printf("%5d", i);
			count += i;
		}
	}
	printf("\n");
	printf("Sum = %d", count);
	return 0;
}