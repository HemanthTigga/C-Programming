#include<stdio.h>
int main()
{
    int m,n,i,j,s=0;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            s=s+arr[j][i];
        }
        printf("%d ",s);
        s=0;
    }
    return 0;
}
