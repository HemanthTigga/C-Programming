#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int t = num * num,s=1;
    int temp = num;
    while(temp)
    {
        s = s*10;
        temp /= 10;
    }
    if(num == (t%s))
        printf("Automorphic");
    else
        printf("Not Automorphic");

    return 0;
}
