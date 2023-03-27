#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int arr1[m][m];
    int arr2[m][m];
    int arr3[m][m];
    printf("matrix 1");
    for(int i =0;i< m;i++)
    {
        for(int j =0;j<m;j++)
            scanf("%d",&arr1[i][j]);
    }
    printf("matrix 2");
    for(int i =0;i< m;i++)
    {
        for(int j =0;j<m;j++)
            scanf("%d",&arr2[i][j]);
    }

    int s=0;
    for(int i =0;i< m;i++)
    {
        for(int j =0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            {
                s = s + arr1[i][k] * arr2[k][i];
            }
            arr3[i][j] = s;
            s=0;
        }
    }

    for(int i =0;i< m;i++)
    {
        for(int j =0;j<m;j++)
            printf("%d\t",arr3[i][j]);

        printf("\n");
    }
    return 0;
}
