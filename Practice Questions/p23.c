#include <stdio.h>
#include <string.h>
#include<malloc.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char arr[n][999];
    char temp[999];
    for(i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(arr[j],arr[j+1]) > 0)
            {
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }
    printf("The sorted array of strings is: \n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",arr[i]);
    }
    return 0;
}