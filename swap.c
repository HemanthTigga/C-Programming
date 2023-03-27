#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   printf("Before Swapping\n");
   printf("a = %d ",a);
   printf("b = %d \n",b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("After Swapping\n");
   printf("a = %d b = %d ",a,b);
   //printf("b = %d",b);
   return 0;
}

