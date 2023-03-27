#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int s = sum(n);
    printf("%d",s);
    return 0;
}

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n%2 == 0)
        return n + sum(n-1);
    else
        return sum(n-1);
}
