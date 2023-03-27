#include<stdio.h>
#include<math.h>

int main()

{
    int n;
    scanf("%d",&n);
    int c = (n == 0)?1:log10(n)+1;
    int t = pow(10,c-1);
    printf("%d %d",n/t,n%10);
    return 0;

}