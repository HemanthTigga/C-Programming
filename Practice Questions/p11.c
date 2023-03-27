#include<stdio.h>
int main()
{
    int n,i,p=0,k,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=n-1;k>i;k--)
        {
            printf(" ");
        }
        for(j=0;j<=p;j++)
        {
            printf("*");
        }
        p = 2*(i+1);
        printf("\n");
    }
    return 0;
}