#include<stdio.h>
int main()
{
    int i,j;
    int row,col,sumrow=0,sumcol=0;
    printf("enter size of 2d matrix\n");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int ans[col][row];
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i =0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            ans[i][j]= arr[j][i];
        }
    }
    for(int i =0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
