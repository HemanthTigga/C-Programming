# include <stdio.h>
int main()
{
    int size,M;
    scanf("%d%d",&size,&M);
    int arr[size],min=999999,max =-999999,i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    switch (M)
    {
        case 1:
        {
            for(i=0;i<size;i++)
            {
                if(arr[i] < min)
                    min = arr[i];
            }
            printf("%d",min);
            break;
        }
        case 2:
        {
            for(i=0;i<size;i++)
            {
                if(arr[i] > max)
                    max = arr[i];
            }
            printf("%d",max);
            break;
        }
    }
    return 0;
}