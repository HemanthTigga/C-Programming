#include<stdio.h>
int main()
{
    int l,b,i,area,m,max_area = -1,min,n;
    printf("Enter dimension of Doremon's battery");
    scanf("%d%d",&l,&b);
    if(l>b)
        min = l;
    else
        min = b;
    for(i=b;i>=1;i--)
    {
        int c1 = (l/i) * i;
        int c2 = (b/i) * i;
        area = c1 * c2;
        if(area > max_area && area <= (l*b))
        {
            max_area = area;
            m = i;
        }
    }
    n = (l/m) * (b/m);
    printf("Area = %d\n",max_area);
    printf("Unit = %d\n",m);
    printf("No. of cells = %d",n);
    return 0;
}
