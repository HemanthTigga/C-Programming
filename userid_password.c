#include<stdio.h>
void print(int n)
{
if(n==0)
{
return;
}

    print(n--);
    printf("%d",n);
}


int main()
{
    printf("enter userid and password\n");
    int userid,password,a=101,b=123;
    scanf("%d%d",&userid,&password);
    if(userid != a && password != b)
    {
        printf("Invalid user");
    }
    else if(userid == a && password != b)
    {
        printf("password is incorrect");
    }
    else if(userid != a && password == b)
    {
        printf("userid is incorrect");
    }
    else
    {
        printf("Welcome user");
    }
    print(10);
    return 0;
}
