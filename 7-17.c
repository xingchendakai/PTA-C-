#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, u, d;
	int t = 0;
	scanf("%d%d%d", &n, &u, &d);
	int h = d;
	do
		{
			h -= d;
			t ++ ;
			h += u;
			t++;
		} while (h < n);
		t = t - 1;
	 printf("%d", t);
	return 0;
}