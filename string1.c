#include<stdio.h>
int main()
{
    int m,n;
    printf("enter size of first and last name");
    scanf("%d",&m);
    char first[m];
    //char last[n];
    printf("enter first and last name");
    scanf("%s",first);
    //fgets("%s",first);
    printf("First name = %10.5s  ",first);
    return 0;
}
