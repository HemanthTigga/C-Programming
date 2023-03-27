#include<stdio.h>
int main()
{
    //int  a1,a2,a3,sum = 0;
    double  a1,a2,a3,sum;
    printf("Enter 1st angle\n");
    //scanf("%d",&a1);
    scanf("%lf",&a1);
    printf("Enter 2nd angle\n");
    //scanf("%d",&a2);
    scanf("%lf",&a2);
    printf("Enter 3rd angle\n");
    //scanf("%d",&a3);

    scanf("%lf",&a3);
    sum = a1+a2+a3;
    printf("sum= %lf\n",sum);
    //printf("sum= %f\n",sum);
    if((a1+a2+a3) == 180.0)
    {

        printf("valid triangle ");
        if(a1 == 90.0 || a2 == 90.0 || a3 == 90.0)
        {
            printf("and also a right angled triangle.");
        }
        else
        {
            printf("but not a right angled triangle.");
        }
    }
    else
    {
        printf("Not a triangle");
    }
    //int a = 5,2;
    //printf("a= %d\n"a);
    /*int a=0;
    a = 5,2;
    printf("a= %d\n",a);
    a=0;
    a=(5,2);
    printf("a= %d\n",a);*/
    return 0;
}
