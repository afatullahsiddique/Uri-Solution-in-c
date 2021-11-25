#include<stdio.h>

int main()
{
    double x, y;

    scanf("%lf %lf", &x, &y);

    double avarage = (x * 3.5 + y * 7.5)/11;
    printf("MEDIA = %.5lf\n", avarage);

    return 0;
}
