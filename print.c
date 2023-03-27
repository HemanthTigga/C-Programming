#include<stdio.h>
void printnum(int n)
{
    if(n==0)
    {
        return;
    }

    printnum(n--);
    printf("%d",n);
}


int main()
{

    printnum(10);
    return 0;
}
