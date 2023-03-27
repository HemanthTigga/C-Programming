#include<stdio.h>
int main()
{
    int p =4;
    char n=97+p;
    for(int i=5;i>=0;i--)
    {
        for(int j =0;j<i;j++)
        {
            printf("%c",n);
            n--;
        }
        printf("\n");
        n=97+p                                                                                                                                                                                                                                                                                      ;
    }
    return 0;
}
