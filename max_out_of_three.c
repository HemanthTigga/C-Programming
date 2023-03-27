#include<stdio.h>
int main()
{
    printf("enter 3 numbers");
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("num1 is greatest");
    }
    else if(num2>num1 && num2>num3)
    {
        printf("num2 is greatest");
    }
    else if(num3>num1 && num3>num2)
    {
        printf("num3 is greatest");
    }
    else if(num1 == num2 && num1 == num3)
        printf("All numbers are equal");

    else if(num1 == num2)
        printf("num1 and num2 are greatest");

    else if(num1 == num3)
        printf("num1 and num3 is greatest");

    else if(num2 == num3)
        printf("num2 and num3 is greatest");

    return 0;
}
