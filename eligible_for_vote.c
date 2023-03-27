#include<stdio.h>
int main()
{
    printf("enter the age of 3 users");
    int age1,age2,age3;
    scanf("%d%d%d",&age1,&age2,&age3);
    if(age1>=18 && age2<18 && age3<18)
    {
        printf("user1 is eligible");
    }
    else if(age1<18 && age2>=18 && age3<18)
    {
        printf("user2 is eligible");
    }
    else if(age1<18 && age2<18 && age3>=18)
    {
        printf("user3 is eligible");
    }
    else if(age1>=18 && age2>=18 && age3<18)
    {
        printf("user1 and user2 are eligible");
    }
    else if(age1>=18 && age2<18 && age3>=18)
    {
        printf("user1 and user3 are eligible");
    }
    else if(age1<18 && age2>=18 && age3>=18)
    {
        printf("user2 and user3 are eligible");
    }
    else if(age1>=18 && age2>=18 && age3>=18)
    {
        printf("All users is eligible");
    }
    else
    {
        printf("No user is eligible");
    }
    return 0;
}
