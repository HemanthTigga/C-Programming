#include<stdio.h>
int factorial(int N);

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}

int factorial(int N)
{
    if(N == 1)
        return 1;

    return N * factorial(N-1);
}
