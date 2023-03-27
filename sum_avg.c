#include<stdio.h>
int main()
{
    float marks[5];
    float sum = 0;
    for(int i=0;i<5;i++)
    {
        scanf("%f",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum = sum + marks[i];
    }
    printf("sum = %.2f\n",sum*1.0);
    printf("avg = %.2f",sum*1.0/5.0);
}
