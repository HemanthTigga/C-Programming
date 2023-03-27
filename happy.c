#include<stdio.h>
int main()
{
    int i,s=0,c=0;
    for(i = 1000;i<10000;i++)
    {
        int t =i;
        while(t>9)
        {
            while(t>0)
            {
                s = s+((t%10)*(t%10));
                t /= 10;
            }
            t=s;
            s=0;
        }
        if(t == 1){
            printf("%d ",i);
            c++;
            }
    }
    printf("\n\nNo of 4-digit Happy number = %d\n",c);
    return 0;
}
