#include<stdio.h>
int main()
{
    int n,i,s=0,c=0;
    scanf("%d",&n);
    int t=n;
    while(t)
    {
        c++;
        t /= 10;
    }
    t=n;
    while(t)
    {
        if(c%2 == 0)
        {
            s -= t%10;
        }
        else
        {
            s += t%10;
        }
        t /= 10;
        c--;
    }
    printf("%d",s);
    return 0;
}