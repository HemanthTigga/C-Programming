#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num,a=0,b=1,c=0,k=0;
        scanf("%d",&num);
        if(num == a || num == b)
        {
            printf("true\n");
            continue;
        }
        while(1)
        {
            c = a+b;
            a = b;
            b = c;
            if(c == num){
                printf("true\n");
                break;
            }
            if(c > num)
            {
                k=1;
                break;
            }
        }
        if(k == 1)
        printf("false\n");
    }
    return 0;
}
