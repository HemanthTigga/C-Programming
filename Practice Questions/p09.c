#include<stdio.h>
int main()
{
    char ch,i,j;
    scanf("%c",&ch);
    for(i='A';i<=ch;i++)
    {
        for(j=i;j>='A';j--)
        {
            if(j>'A')
                printf("%c ",i);
            else if(j=='A')
                printf("%c",i);
        }
        // if(i < ch)
            printf("\n");
    }
    return 0;
}