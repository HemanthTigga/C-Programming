#include<stdio.h>
int armstrong(int temp)
{
    int s=0,d;
    while(temp>0)
        {
            d = temp%10;
            //printf("%d\n",d);
            s += (d*d*d);
            temp = temp/10;
        }
        return s;
}
int main()
{
    int num,temp,s=0,d;
    scanf("%d",&num);
        for(int i=0;i<num;i<i++)
        {

            int s = armstrong(i);
            if(s == i)
                printf("%d\n",i);
        }
        return 0;
}
