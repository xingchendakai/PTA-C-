#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double a3, a2, a1, a0, a, b;
	scanf("%lf%lf%lf%lf\n%lf%lf", &a3, &a2, &a1, &a0, &a, &b);
	if (((pow(b, 3.0) * a3) + (pow(b,2) * a2) + (a1 * b) + a0) * ((pow(a, 3.0) * a3) + (pow(a, 2) * a2) + (a1 * a) + a0) < 0)
	{
		while (a <= b&&b-a>=0.01)
		{
			double mid = (a + b) / 2;
			if ((pow(mid, 3.0) * a3) + (pow(mid,2) * a2) + (a1 * mid) + a0 == 0)
			{
				printf("%.2lf", mid);
				break;
			}
			else if (((pow(mid, 3.0) * a3) + (pow(mid, 2) * a2) + (a1 * mid) + a0) * ((pow(a, 3.0) * a3) + (pow(a, 2) * a2) + (a1 * a) + a0) > 0)
				a = mid;
			else
				b = mid;
		}
		if (b-a<0.01)
		{
			double mid = (a + b) / 2;
			printf("%.2lf", mid);
		}
	}
	else if (((pow(b, 3.0) * a3) + (pow(b, 2) * a2) + (a1 * b) + a0) == 0)
	{
		printf("%.2lf", b);
	}
	else if (((pow(a, 3.0) * a3) + (pow(a, 2) * a2) + (a1 * a) + a0) == 0)
	{
		printf("%.2lf",a);
	}
	/*¼ò½à´ð°¸
	#include<stdio.h>
    int main(int argc,char** argv)
    {
  	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
 	double x1,x2;
 	scanf("%lf%lf",&x1,&x2);
 	while(1)
 	{
 		double x=(x1+x2)/2.0;
 		double y=a*x*x*x+b*x*x+c*x+d;
 		double y1=a*x1*x1*x1+b*x1*x1+c*x1+d;
 		if(y==0||x2-x1<0.01)
 		{
 			printf("%.2lf\n",x);
 			break;
 		}
 		if(y*y1<0)
 			x2=x;
 		else
 			x1=x;
	}
  	return 0;
	}
*/
	return 0;
}