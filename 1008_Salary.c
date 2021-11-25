#include<stdio.h>

int main()
{
    int x, y;
    double z;
    scanf("%d", &x);
    scanf("%d %lf", &y, &z);
    double sal = y * z;
    printf("NUMBER = %d\n", x);
    printf("SALARY = U$ %.2lf\n", sal);

    return 0;
}
