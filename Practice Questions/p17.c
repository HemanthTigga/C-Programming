#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s=0,i,k=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for(i=n-1;i>=0;i--)
        {
            s=s+pow(2,k++)*((int)(str[i]-'0'));
        }
        
        printf("%d\n",s);
    }
    return 0;
}