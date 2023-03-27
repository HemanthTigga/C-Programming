#include<stdio.h>
int main()
{
    int n,m,i,j,p=0;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j] == 0)
            {
                p=i;
                break;
            }
        }
    }
    for(j=0;j<m;j++)
    {
        arr[p][j] = 0;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        if(i<n)
            printf("\n");
    }
    return 0;
}