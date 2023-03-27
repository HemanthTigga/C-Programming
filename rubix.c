#include<stdio.h>
int pieces(int num);
int main()
{int dim;
    printf("Enter dimension of cube: ");
    scanf("%d",&dim);
    printf("%d",pieces(dim));
    return 0;
}
int pieces(int num)
{
    if(num == 1)
        return 1;
    else if(num == 2)
    {
        return num*num*num;
    }
    return (pow(num,3)-pow(num-2,3));
}
