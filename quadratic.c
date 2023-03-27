#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    double dis = (b*b)-4.0*a*c;
    if(dis>0)
    {
        printf("It as complex roots");
        double r1 = (-b+sqrt(dis))/2.0*a;
        double r2 = (-b-sqrt(dis))/2.0*a;
        printf("%f %f",r1,r2);
    }
    if(dis == 0)
    {
        printf("It as equal roots");
        double r1 = -b/(2*a);
        double r2 = -b/(2*a);
        printf("%f %f",r1,r2);
    }
    else
    {
        printf("Roots not real");
    }


}
