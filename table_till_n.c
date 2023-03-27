#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int j=2;j<=num;j++)
    {
        printf("Table of %d:\n",j);
        for(int i=1;i<11;i++)
        {
            printf("%d*%d = %d\n",j,i,j*i);
        }
        printf("\n");
    }

    return 0;
}
