#include<stdio.h>

int main()
{
    double a,b,c,pi=3.14159;

    scanf("%lf%lf%lf", &a,&b,&c);

    printf("TRIANGULO: %.3lf\n", (a*c)/2);
    printf("CIRCULO: %.3f\n",pi*(c*c));
    printf("TRAPEZIO: %.3f\n",((a+b)/2)*c);
    printf("QUADRADO: %.3f\n",(b*b));
    printf("RETANGULO: %.3f\n",(a*b));

    return 0;
}
