#include<stdio.h>
int main()
{
    int n=1,s=0;
    while(n<=15)
    {
        if(n%3 == 0)
        {
            printf("%d,",n);
            s = s+n;
        }
        n++;
    }
    printf("sum= %d",s);
    return 0;
}
