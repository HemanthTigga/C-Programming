#include<stdio.h>
void num_words(int n);
void num_words(int n)
{
    switch(n)
    {
        case 0:
            {
                printf("Zero ");
                break;
            }
        case 1:
            {
                printf("One ");
                break;
            }
        case 2:
            {
                printf("Two ");
                break;
            }
        case 3:
            {
                printf("Three ");
                break;
            }
        case 4:
            {
                printf("Four ");
                break;
            }
        case 5:
            {
                printf("Five ");
                break;
            }
        case 6:
            {
                printf("Six ");
                break;
            }
        case 7:
            {
                printf("Seven ");
                break;
            }
        case 8:
            {
                printf("Eight ");
                break;
            }
        case 9:
            {
                printf("Nine ");
                break;
            }
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    int rev = 0;
    while(num>0)
    {
        rev = rev*10 + (num%10);
        num = num /10;
    }
    while(rev >0)
    {
        num_words(rev%10);
        rev = rev/10;
    }
    return 0;
}
