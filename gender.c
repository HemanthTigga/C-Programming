#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='M' || c == 'm')
        printf("Male\n");
    else if(c == 'F' || c == 'f')
        printf("Female\n");
    else
        printf("Others\n");
    return 0;
}
