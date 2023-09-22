#include <stdio.h>

int main(void)
{
    double km, miles;
    printf("Please enter kilometers : ");
    scanf("%lf", &km);

    miles = km / 1.609;

    printf("%.1lf km is equal to %.1lf miles.", km, miles);


    return 0;
}
