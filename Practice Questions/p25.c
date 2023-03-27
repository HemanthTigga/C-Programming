#include <stdio.h>
int main()
{
    int n,c=0,i,j,target;
    scanf("%d%d",&n,&target);
    int arr[n];
    for(i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((arr[i] + arr[j]) == target && i != j)
            {
                // printf("%d %d ",arr[i],arr[j]);
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}