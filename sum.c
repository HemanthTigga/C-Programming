#include<stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];
    int arr3[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(int i=0;i<size;i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}
