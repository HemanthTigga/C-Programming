#include<stdio.h>
int main()
{
    int i,j;
    int row,col,sumrow=0,sumcol=0;
    printf("enter size of 2d matrix\n");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sumrow += arr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\nSum of row %d = %d\n",i+1,sumrow);
        sumrow =0;

    }

    printf("\n");
    for(int i =0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            sumcol += arr[j][i];
            printf("%d ",arr[j][i]);
        }
        printf("\nSum of col %d = %d\n",i+1,sumcol);
        sumcol =0;
    }
    return 0;
}
