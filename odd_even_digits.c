#include<stdio.h>
int main()
{
    int num,od=0,ev=0,z=0;
    scanf("%d",&num);
    if(num<1000 || num>9999)
    {
        printf("Not a valid input");
    }
    else{
        while(num>0)
        {
            int d= num%10;
            if(d%2 == 1)
            {
                od ++;
            }
            else if(d%2 == 0 && d!=0)
            {
                ev++;
            }
            else if(d == 0)
            {
                z++;
            }
            num = num/10;
        }
        printf("Number of odd digits = %d\n",od);
        printf("Number of even digits = %d\n",ev);
        printf("Number of zero = %d\n",z);
    }
    return 0;
}
