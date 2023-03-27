#include<stdio.h>
int main()
{
    int n ;
    scanf("%d",&n);
    float s = 1.0;
    if(n == 0)
        printf("%.2f",0.0);
    else
    {
        printf("%d",1);
        for(int i=2;i<=n;i++)
        {
            printf(" + 1/%d",i);
            s = s+(1.0/(i*1.0));
        }
        printf("\n%.2f",s);
    }
    return 0;
}
