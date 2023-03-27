#include<stdio.h>
int main()
{
    int N,i;
    float s = 0.0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2 == 0)
        {
            s -= 1.0/(i*1.0);
        }
        else
        {
            s += 1.0/(i*1.0);
        }
    }
    printf("%.4f",s);
    return 0;
}