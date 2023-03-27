#include<stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int ev=0,od=0;
    int arr1[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<size;i++)
    {
        if(arr1[i] % 2 == 0)
            ev++;
        else
            od++;
    }
    printf("even number = %d\n",ev);
    printf("odd number = %d",od);
}
