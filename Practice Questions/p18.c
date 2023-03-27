#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l,sl;
    if(arr[0] > arr[1])
    {
        l = arr[0];
        sl = arr[1];
    }
    else
    {
        l = arr[1];
        sl = arr[0];
    }
    for(i=2;i<n;i++)
    {
        if(arr[i] > l)
        {
            sl = l;
            l = arr[i];
            
        }
        else if(arr[i] > sl)
        {
            sl = arr[i];
        }
    }
    printf("Max = %d\n",l);
    printf("Second Max = %d",sl);
    return 0;
}