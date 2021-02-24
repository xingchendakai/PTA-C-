#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int x, y, n = 0;
	int count = 0;
	scanf("%d", &n);
	for (x = 0; x <= sqrt(n); x++)
	{
		for (y = 0; y <= sqrt(n); y++)
		{
			if(pow(x,2)+pow(y,2)==n&&x<=y)
			{
				printf("%d %d\n",x,y);
				count=1;
			}
		}
	}
	if (count == 0)
		printf("No Solution");
	return 0;
}