#include<stdio.h>
int main()
{
    int n,c=0 ;
    scanf("%d",&n);
    for(;n>0;n = n/10)
        c++;
    printf("count = %d",c);
    return 0;
}
