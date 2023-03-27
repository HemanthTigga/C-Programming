#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k = n;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}
