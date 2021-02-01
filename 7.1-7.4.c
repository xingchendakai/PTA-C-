#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//厘米换算英寸英尺
	double zs = 0;
	scanf("%lf", &zs);
	int foot = zs / 30.48;
	int inch = (zs/30.48-foot)*12;
	printf("%d %d\n",foot, inch);
	//然后是几点？
    int starttime, durtime;
    scanf("%d %d", &starttime, &durtime);
    int dm, dh, sm, sh;
    dm = durtime % 60;//将流逝时间转化为分和时
    dh = durtime / 60;
    sm = starttime % 100;//将起始时间转化为时和分
    sh = starttime / 100;
    sm += dm;
    if (sm >= 60)
    {
        sm = sm - 60;
        sh = sh + 1;
    }
    if (sm < 0)
    {
        sm = sm + 60;
        sh = sh - 1;
    }
    sh += dh;
    printf("%d%02d", sh, sm);
    //逆序的三位数
    int num = 0;
    scanf("%d", &num);
    int b = num / 100;
    int s = num % 100 / 10;
    int g = num % 10;
	int mun = g * 100 + s * 10 + b;
    printf("%d", mun);
    //BCD解密
    int c = 0;
    int z = 0;
    scanf("%d", &c);
    z = c / 16 * 10 +(c - 16*(c/16));
    printf("%d", z);
	return 0;
}