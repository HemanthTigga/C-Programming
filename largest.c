#include<stdio.h>
int main()
{
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int num[size];
    int max_ele;
    int min_ele;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
    }
    max_ele = num[0];
    min_ele = num[0];
    for(int i=0;i<size;i++)
    {
        if(num[i]>max_ele)
            max_ele = num[i];
        if(num[i] < min_ele)
            min_ele = num[i];
    }
    printf("min element = %d\n",min_ele);
    printf("max element = %d",max_ele);
    return 0;
}
