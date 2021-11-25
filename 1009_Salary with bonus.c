#include<stdio.h>

int main()
{
    char name;
    double x, y;
    scanf("%s %lf %lf", &name, &x, &y);
    double total = x + y * .15 ;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
