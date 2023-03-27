#include<stdio.h>
int checkDiagonal(int mat[5][5], int i, int j);
int isToeplitz(int mat[5][5]);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[5][5],i,j;
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        if(isToeplitz(arr))
            printf("TRUE\n");
        else
            printf("FALSE\n");
    }
    return 0;
}
int checkDiagonal(int mat[5][5], int i, int j)
{
    int res = mat[i][j];
    while(++i < 5 && ++j < 5)
    {
        if (mat[i][j] != res)
            return 0;
    }
    return 1;
}

int isToeplitz(int mat[5][5])
{
    int i;
    for(i = 0; i < 5; i++)
    {
        if (!checkDiagonal(mat, 0, i))
            return 0;
    }
    for(i = 1; i < 5; i++)
    {
        if (!checkDiagonal(mat, i, 0))
            return 0;
    }
    return 1;
}