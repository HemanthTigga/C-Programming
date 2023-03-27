#include<stdio.h>
int main()
{
    int n=1,s=0;
    while(n<=15)
    {
        if(n%3 == 0)
        {
            n++;
            continue;
        }
        printf("%d,",n);
        s = s+n;
        n++;
    }
    printf("\nsum= %d",s);
    return 0;
}
