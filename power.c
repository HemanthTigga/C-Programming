#include<stdio.h>
#include<math.h>
int main()
{
    int base,exponent;
    scanf("%d%d",&base,&exponent);
     printf("Using pow function:\n");
     int power = pow(base,exponent);
    printf("power= %d\n",power);

    printf("Without Using pow function:\n");
    int ans=1;
    for(int i=1;i<=exponent;i++)
    {
        ans *= base;
    }
    printf("power = %d",ans);
    return 0;
}
