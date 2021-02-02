#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	//表格输出
	printf("------------------------------------\n");
	printf("Province      Area(km2)   Pop.(10K)\n");
	printf("------------------------------------\n");
	printf("Anhui         139600.00   6461.00\n");
	printf("Beijing        16410.54   1180.70\n");
	printf("Chongqing      82400.00   3144.23\n");
	printf("Shanghai        6340.50   1360.26\n");
	printf("Zhejiang      101800.00   4894.00\n");
	printf("------------------------------------\n");
	//混合类型数据格式化输出
	int a = 0;
	double b, c;
	char d[10];
	scanf("%lf%d%s%lf", &b, &a, &d, &c);
	printf("%c %d %.2lf %.2lf\n", d[0], a, b, c);
	//12-24小时制
	int h = 0;
	int m = 0;
	scanf("%d:%d", &h, &m);
	if (h > 12)
	{
		h = h - 12;
		printf("%d:%d PM", h, m);
	}
	else if(h < 12)
	{
		printf("%d:%d AM", h, m);
	}
	else
	{
		printf("%d:%d PM", h, m);
	}
	//超速判断
	int v= 0;
	scanf("%d", &v);
	if (v > 60)
	{
		printf("Speed: %d - Speeding", v);
	}
	else
		printf("Speed: %d - OK", v);
	//用天平找小球
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 == num2 && num1 != num3)
	{
		printf("C");
	}
	else if (num1 == num3 && num1 != num2)
	{
		printf("B");
	}
	else if (num2 == num3 && num2 != num1)
	{
		printf("A");
	}
	else
		printf("A B C");
	return 0;
}