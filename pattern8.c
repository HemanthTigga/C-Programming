#include<stdio.h>
int main()
{
    char n=97;
    for(int i=0;i<5;i++)
    {
        for(int j =0;j<=i;j++)
        {
            printf("%c",n);
            n++;
        }
        printf("\n");
        n=97;
    }
    return 0;
}
