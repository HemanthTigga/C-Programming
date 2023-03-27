#include<stdio.h>
int main()
{
    int i,j;
    int row,col,sumrow=0,sumcol=0;
    printf("enter size of 2d matrix\n");
    scanf("%d%d",&row,&col);
    int arr1[row][col];
    int arr2[row][col];
    int arr3[row][col];
    printf("matrix 01\n");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("matrix 02\n");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("matrix 02\n");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
