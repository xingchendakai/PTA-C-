#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int rab_m = 0;
    int rab_time = 0;
    int tur_m = 0;
    int time;
    scanf("%d", &time);
    for (int i = 1; i <= time; i++)
    {
        rab_time++;
        if (rab_time > 0)
        {
            rab_m += 9;
            tur_m = 3 * i;
        }
        if ((rab_time == 10) && (rab_m > tur_m))
        {
            rab_time = -30;
        }
        else if ((rab_time == 10) && (rab_m <= tur_m)) //开始时漏掉了rab_m <= tur_m的情况，
        { 											//考虑不全面
            rab_time = 0;
        }
    }
    if (rab_m > tur_m)
        printf("^_^ %d\n", rab_m);
    else if
        (tur_m > rab_m) printf("@_@ %d\n", tur_m);
    else
        printf("-_- %d", tur_m);
    return 0;
}
