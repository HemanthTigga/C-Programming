#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=0;j<n-1;j++)
        {
            if(i == arr[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}