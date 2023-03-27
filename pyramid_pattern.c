#include<stdio.h>
int main()
{
    int rows;
    scanf("%d",&rows);
    for(int i=0;i<rows;i++)
    {
        for(int k =rows-1;k>i;k--)
        {
            printf("  ");
        }
        for(int j=0;j<=2*i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
