#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int t = arr[i];
        int r=0;
        while(t)
        {
            r = r*10 + t%10;
            t /= 10;
        }
        while(r)
        {
            printf("%d ",r%10);
            r /=10;
        }
    }
    return 0;
}
