#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	//计算工资
	double year = 0;
	double worktime = 0;
	scanf("%lf%lf", &year, &worktime);
	if (year < 5)
	{
		if (worktime < 40)
			printf("%.2lf\n", worktime * 30);
		else if (worktime >= 40)
			printf("%.2lf\n", 1200 + (worktime - 40) * 45);
	}
	else if(year>=5)
	{
		if (worktime < 40)
			printf("%.2lf\n", worktime * 50);
		else if (worktime >= 40)
			printf("%.2lf\n", 2000 + (worktime - 40) * 1.5*50);
	}
	//分段计算居民水费
	double shuiliang = 0.00;
	scanf("%lf", &shuiliang);
	if (shuiliang <= 15)
		printf("%.2lf\n", 4 * shuiliang / 3);
	else
		printf("%.2lf\n", shuiliang * 2.5 - 17.5);
	return 0;
}