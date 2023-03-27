#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=60 && marks <=100)
    {
        printf("First Div");
    }
    else if(marks >=50 && marks<60)
        printf("Second Div");

    else if(marks>=40 && marks<50)
        printf("Third Div");

    else if(marks>=33 && marks<40)
        printf("pass");

    else if(marks<33 && marks >=0)
        printf("fail");

    else{
        printf("invalid");
    }

    return 0;
}
