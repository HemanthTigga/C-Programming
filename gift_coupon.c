#include<stdio.h>
int main()
{
    int bill,temp,s=0;
    scanf("%d",&bill);
    temp=bill;
    while(bill)
    {
        s = s+bill%10;
        bill = bill/10;
    }
    //printf("s= %d\n",s);
    if(s%5 == 0)
        printf("Bill Number %d is Eligible For Gift Coupon",temp);
    else
        printf("Bill Number %d is Not Eligible For Gift Coupon",temp);
}
