#include<stdio.h>
int main()
{
    int n,j,j1,i;
    scanf("%d%d",&n,&j);
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j1=0;j1<n;j1++)
        {
            scanf("%d",&arr[i][j1]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i][j--]);
        if(j<0)
            break;
    }
    return 0;
}