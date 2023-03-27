#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
    printf("The sorted book list \n");
    for(i=0;i<n;i++)
    {
        if(i<n-1)
            printf("%d ",arr[i]);
        else
            printf("%d",arr[i]);
    }
    return 0;
}