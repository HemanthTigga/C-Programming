#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Before Swap: a = %d,b = %d,c = %d\n",a,b,c);
    a = a+b;
    b = a-b;
    a = a-b;
    a = a+c;
    c = a-c;
    a = a-c;
    printf("After Swap: a = %d,b = %d,c = %d",a,b,c);
    return 0;
}
