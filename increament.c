//write a program to accept a value from user in main func in a variable called 'm' and pass the variable to a func called increament where the value of 'm' would be increase by 1.
//In both the functions print the value of 'm' and the address of 'm'.
#include<stdio.h>
void increament(int *m);
int main()
{
    int m;
    scanf("%d",&m);

    printf("Value of m in main func = %d\n",m);
    printf("Address of m in main func = %p\n",&m);
    increament(&m);
    printf("Value of m in main func = %d\n",m);
    printf("Address of m in main func = %p\n",&m);
    return 0;
}

void increament(int *m)
{
    (*m)++;
    printf("Value of m in increament func = %d\n",*m);
    printf("Address of m in increament func = %p\n\n",&m);

}
