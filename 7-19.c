#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int y = 0;
	int n, f = 0;
	scanf("%d", &n);
	while (f * 100 + y - n != 2 * y * 100 + 2 * f)
	{
		if (y == 99)
		{
			f++;
			y = 0;
		}
		else
			y++;
	}
	if (f < 100)
		printf("%d.%d", y, f);
	else
		printf("No Solution");
	return 0;
}
//ÁíÒ»ÖÖ
//#include <stdio.h>
//int main() {
//	int n = 0, y = 0, f = 0, flag = 0;
//	scanf("%d", &n);
//	for (f = 0; f < 100 && flag != 1; f++) {
//		for (y = 0; y <= 49; y++) {
//			if (98 * f - 199 * y == n) {
//				printf("%d.%d", y, f);
//				flag = 1;
//				break;
//			}
//		}
//	}
//	if (flag == 0)
//		printf("No Solution");
//	return 0;
//}