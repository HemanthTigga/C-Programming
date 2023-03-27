#include<stdio.h>
int main()
{
    int c,n,m,i;
    scanf("%d%d%d",&c,&n,&m);
    int y1[3*c];
    int y2[3*c];
    for(i=0;i<3*c;i++)
    {
        scanf("%d",&y1[i]);
    }
    for(i=0;i<3*c;i++)
    {
        scanf("%d",&y2[i]);
    }
    int s = (3*(n-1))+(m-1);
    printf("%d",y1[s]+y2[s]);
    return 0;
}