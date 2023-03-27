#include<stdio.h>
int main()
{
    int times;
    scanf("%d",&times);
    while(times--)
    {
        int n,i,j;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            int t = i+1;
            int p = i+1;
            for(j=i;j<n-1;j++)
                printf(" ");
            while(t--)
            {
                printf("%d",p++);
            }
            t=i;
            p=p-2;
            while(t--)
            {
                printf("%d",p--);
            }
            if(i<n)
                printf("\n");
        }
    }
    return 0;
}
