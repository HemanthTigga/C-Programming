#include<stdio.h>
void swap(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    printf("Before Swapping\n");
    printf("a= %d\n",n1);
    printf("b= %d\n",n2);
    swap(&n1,&n2);
    printf("After Swapping\n");
    printf("a= %d\n",n1);
    printf("b= %d\n",n2);
}
