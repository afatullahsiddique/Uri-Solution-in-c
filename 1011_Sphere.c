#include<stdio.h>

int main()
{
    int r;
    double pi = 3.14159;

    scanf("%d", &r);
    double sp = (4.0/3.0) * pi * (r*r*r);
    printf("VOLUME = %.3lf\n", sp);

    return 0;
}
