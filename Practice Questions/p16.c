#include<stdio.h>
int main()
{
    char ch,i,j;
    scanf("%c",&ch);
    for(i='A';i<=ch;i++)
    {
        for(j='A';j<=i;j++)
        {
            if(j<i)
                printf("%c ",j);
            else if(j==i)
                printf("%c",j);
        }
        // if(i < ch)
            printf("\n");
    }
    return 0;
}