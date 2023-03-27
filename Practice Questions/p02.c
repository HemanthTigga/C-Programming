#include<stdio.h>
int main()
{
    int N,p=0,i;
    scanf("%d",&N);
    int arr[N];
    for(i =0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    for(i =0;i<N-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            p = i+1;
            break;
        }
    }
    printf("%d",p);
    return 0;
}