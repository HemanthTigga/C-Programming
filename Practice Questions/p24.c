#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=0,i,j;;
        scanf("%d",&n);
        int arr[n];
        for(i = 0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((arr[i] == arr[j]) && i != j)
                {
                    c = 1;
                    break;
                }
            }
            if(c == 1)
            {
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
    return 0;
}