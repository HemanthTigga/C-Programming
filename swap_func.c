#include<stdio.h>
//write a program to accept two numbers from the user in the main func and pass the addresses to a func called swap and swap their values which will be non-return type and display the numbers
void swap(int *n1,int *n2);

int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("Before swapping\n");
    printf("num1 = %d, num2 = %d\n",num1,num2);

    swap(&num1,&num2);

    printf("After swapping\n");
    printf("num1 = %d, num2 = %d",num1,num2);

    return 0;
}
void swap(int *n1,int *n2)
{
    int t = *n1;
    *n1 = *n2;
    *n2 = t;
}
