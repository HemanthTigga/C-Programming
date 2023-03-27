#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        printf("Character is ALPHABET");
    }
    else
        printf("Character is Not ALPHABET");

    return 0;
}
