//write a program to accept n from user as a limit and display those many terms in the fibonacci format
#include<stdio.h>
int main()
{
    int a = 0,b = 1,c,sum = 0;
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",a);
        sum = a;
    }
    else if(n >= 2){
        printf("%d,%d",a,b);
        sum = a+b;
    }

    while(n>2)
    {
        c = a+b;
        sum += c;
        printf(",%d",c);
        a = b;
        b = c;
        n--;
    }
    printf("\nsum = %d",sum);
    return 0;
}
