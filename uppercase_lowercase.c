#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("'%c' is uppercase alphabet",ch);
    }
    else if(ch>=97 && ch<=122)
        printf("'%c' is lowercase alphabet",ch);

    return 0;
}
