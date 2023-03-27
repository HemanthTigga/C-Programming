#include<stdio.h>
int factorial(int n);
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",factorial(num));
    return 0;
}

int factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
    
    return n * factorial(n-1);
}