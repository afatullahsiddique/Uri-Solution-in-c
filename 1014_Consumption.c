#include<stdio.h>
int main()
{
    int x;
    double y;

    scanf("%d\n%lf", &x,&y);
    printf("%.3lf km/l\n", x/y);

    return 0;
}
