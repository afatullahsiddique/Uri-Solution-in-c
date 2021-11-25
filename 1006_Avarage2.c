#include<stdio.h>

int main()
{
    double x, y, z;

    scanf("%lf %lf %lf", &x, &y, &z);
    double avarage = (x * 2 + y * 3 + z * 5)/10;
    printf("MEDIA = %.1lf\n", avarage);

    return 0;
}
