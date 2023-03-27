#include<stdio.h>
int add(int num1, int num2);
int sub(int num1, int num2);
int multiply(int num1, int num2);
int division(int num1, int num2);

int main()
{
    int n1,n2;
    char ch;

    scanf("%d%d",&n1,&n2);
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch)
    {
    case '+':
        {
            printf("%d",add(n1,n2));
            break;
        }
    case '-':
        {
            printf("%d",sub(n1,n2));
            break;
        }
    case '*':
        {
            printf("%d",multiply(n1,n2));
            break;
        }
    case '/':
        {
            printf("%d",division(n1,n2));
            break;
        }
    default:
        {
            printf("wrong operator");
            break;
        }
    }
    return 0;
}

int add(int num1, int num2)
{
    return num1+num2;
}


int sub(int num1, int num2)
{
    return num1-num2;
}

int multiply(int num1, int num2)
{
    return num1*num2;
}


int division(int num1, int num2)
{
    return num1/num2;
}
