#include<stdio.h>
int main()
{
    int a=10,b=8;
    int  c= a++||++a;
    printf("%d %d\n",a,c);
    a=10;
    c= 0||++a;
    printf("%d %d\n",a,c);
    a=10;
    c= 0&&++a;
    printf("%d %d\n",a,c);
    a=5;
    c= ~a;
    printf("%d %d\n",a,c);
    return 0;
}
