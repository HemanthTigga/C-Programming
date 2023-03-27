#include<stdio.h>
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr1[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Before sorting\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr1[i]);
    }

    for(int i =0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    printf("\nAfter sorting\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}
