#include<stdio.h>
int sum_fibo(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int s = sum_fibo(n);
    printf("%d",s);
    return 0;
}

int sum_fibo(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if( n == 2)
    {
        return 1;
    }
    return  sum_fibo(n-1) + sum_fibo(n-2);
}
