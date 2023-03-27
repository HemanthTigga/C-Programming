#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int n=1,s=0;
    while(num)
    {
        s +=n;
        printf("%d, ",n);
        n +=2;
        num--;
    }
    printf("\nsum = %d",s);
}
