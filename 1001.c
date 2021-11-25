#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;

    printf("X = %d\n", sum);

    return 0;
}

#include<stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    int add = x + y;
    int sub = abs(x - y);

    if('+'){
        printf("X = %d\n", add);
    }
    else if('-'){
        printf("X = %d\n", sub);
    }

    return 0;
}
