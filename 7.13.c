#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	//»’K¿Ø÷ÚÕº
	double Open, High, Low, Close;
	scanf("%lf%lf%lf%lf", &Open, &High, &Low, &Close);
	if (Close < Open)
	{
		if (Low < Close)
		{
			if (High > Open)
			{
				printf("BW-Solid with Lower Shadow and Upper Shadow");

			}
			else
			{
				printf("BW-Solid with Lower Shadow");
			}
		}
		else if (High > Open)
		{
			printf("BW-Solid with Upper Shadow");
		}
		else
		{
			printf("BW-Solid");
		}		
	}
	if (Close > Open)
	{
		if (Low < Open)
		{
			if (High > Close)
			{
				printf("R-Hollow with Lower Shadow and Upper Shadow");

			}
			else
			{
				printf("R-Hollow with Lower Shadow");
			}
		}
		else if (High > Close)
		{
			printf("R-Hollow with Upper Shadow");
		}
		else
		{
			printf("R-Hollow");
		}
	}
	if (Close == Open)
	{
		if (Low < Open)
		{
			if (High > Close)
			{
				printf("R-Cross with Lower Shadow and Upper Shadow");

			}
			else
			{
				printf("R-Cross with Lower Shadow");
			}
		}
		else if (High > Close)
		{
			printf("R-Cross with Upper Shadow");
		}
		else
		{
			printf("R-Cross");
		}
	}

	return 0;
}