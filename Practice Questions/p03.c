#include<stdio.h>
int main()
{
    int N,s=0;
    scanf("%d",&N);
    while(N)
    {
        s = s + N%10;
        N /= 10;
    }
    printf("%d",s);
    return 0;
}