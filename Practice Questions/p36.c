#include <stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    int c=(n == 0)?1:log10(n)+1;
    printf("%d",c);
    return 0;

}