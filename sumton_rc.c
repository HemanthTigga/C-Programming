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
    if(n == 1)
    {
        return 1;
    }
    return n + sum(n-1);
}
