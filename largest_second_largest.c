#include<stdio.h>
int main()
{
    int m;
    int arr1[3][3];
    for(int i =0;i< 3;i++)
    {
        for(int j =0;j<3;j++)
            scanf("%d",&arr1[i][j]);
    }
    int max = -999;
    int second_max =-999;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr1[i][j] > max)
            {
                max = arr1[i][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr1[i][j] > second_max && arr1[i][j] < max )
            {
                second_max = arr1[i][j];
            }
        }
    }
    printf("max = %d\n",max);
    printf("Second max = %d",second_max);
    return 0;
}
