#include<stdio.h>
int main()
{
    int n,k=0,j,i;
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int m;
    scanf("%d",&m);
    int arr2[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    int arr3[n+m];
    i=0;
    j=0;
    for(;i<n && j<m;)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else if(arr1[i] == arr2[j])
        {
            arr3[k++] = arr1[i];
            arr3[k] = arr2[j];
            i++;
            j++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < n)
        arr3[k++] = arr1[i++];
    while(j < m)
        arr3[k++] = arr2[j++];
    for(i=0;i<(n+m);i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}