#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = a;
	for (; i <= a + 4; i++)
	{
		if (i == a)
		{
			printf("%d ", i * 100 + (i + 1) * 10 + (i + 2) * 1);
			printf("%d ", i * 100 + (i + 1) * 10 + (i + 3) * 1);
			printf("%d ", i * 100 + (i + 2) * 10 + (i + 1) * 1);
			printf("%d ", i * 100 + (i + 2) * 10 + (i + 3) * 1);
			printf("%d ", i * 100 + (i + 3) * 10 + (i + 1) * 1);
			printf("%d\n", i * 100 + (i + 3) * 10 + (i + 2) * 1);
		}
		if (i == a + 1)
		{
			printf("%d ", i * 100 + (i - 1) * 10 + (i + 1) * 1);
			printf("%d ", i * 100 + (i - 1) * 10 + (i + 2) * 1);
			printf("%d ", i * 100 + (i + 1) * 10 + (i - 1) * 1);
			printf("%d ", i * 100 + (i + 1) * 10 + (i + 2) * 1);
			printf("%d ", i * 100 + (i + 2) * 10 + (i - 1) * 1);
			printf("%d\n", i * 100 + (i + 2) * 10 + (i + 1) * 1);
		}
		if (i == a + 2)
		{
			printf("%d ", i * 100 + (i - 2) * 10 + (i - 1) * 1);
			printf("%d ", i * 100 + (i - 2) * 10 + (i + 1) * 1);
			printf("%d ", i * 100 + (i - 1) * 10 + (i - 2) * 1);
			printf("%d ", i * 100 + (i - 1) * 10 + (i + 1) * 1);
			printf("%d ", i * 100 + (i + 1) * 10 + (i - 2) * 1);
			printf("%d\n", i * 100 + (i + 1) * 10 + (i - 1) * 1);
		}
		if (i == a + 3)
		{
			printf("%d ", i * 100 + (i - 3) * 10 + (i - 2) * 1);
			printf("%d ", i * 100 + (i - 3) * 10 + (i - 1) * 1);
			printf("%d ", i * 100 + (i - 2) * 10 + (i - 3) * 1);
			printf("%d ", i * 100 + (i - 2) * 10 + (i - 1) * 1);
			printf("%d ", i * 100 + (i - 1) * 10 + (i - 3) * 1);
			printf("%d\n", i * 100 + (i - 1) * 10 + (i - 2) * 1);
		}
	}
	//¼ò½à×ö·¨
	//int main()
	//{
	//	int a, count = 0;
	//	scanf("%d", &a);
	//	for (int i = a; i <= a + 3; i++)
	//		for (int j = a; j <= a + 3; j++)
	//			for (int k = a; k <= a + 3; k++)
	//				if (i != j && i != k && j != k)
	//				{
	//					printf("%d%d%d", i, j, k);
	//					count++;
	//					if (count % 6 == 0)
	//						printf("\n");
	//					else
	//						printf(" ");
	//				}

	//}

	return 0;
}