#include<stdio.h>
#include<stdbool.h>
bool isprime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    scanf("%d",&num);

    if(isprime(num))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
