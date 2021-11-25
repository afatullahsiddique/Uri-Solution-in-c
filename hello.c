#include<stdio.h>

int main()
{
    int i, sum=0, count= 0, x = 100;

    for(int i =1; i<=x; i++)
    {
        if(i%2==0){
            if(i%5==0){
                count++;
                sum = sum + i;
            }
        }
    }
    printf("Sum : %d\n", sum);
    printf("Avarage : %d\n", sum/count);
}
