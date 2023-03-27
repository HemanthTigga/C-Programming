//factorial of n
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int p = fact(n);
    printf("factorial = %d",p);
    return 0;
}

/*int fact(int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
    {
        p = p*i;
    }
    return p;
}*/

int fact(int n)
{
    if(n == 0)
        return 1;
    return n*fact(n-1);
}
