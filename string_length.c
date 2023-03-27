#include<stdio.h>
int main()
{
    char arr[] = {'h','e','m'};
    int l = 0;
    for(int i =0;arr[i] != '\0';i++)
    {
        l++;
    }
    printf("%d",l);
    return 0;
}
