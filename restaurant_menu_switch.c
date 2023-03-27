#include<stdio.h>
int main()
{
    int item,n,total;
    printf("select any item:\n  Menu:\n S.no   food item  price\n 1    noodles     200\n 2    pizza      320\n 3   sandwich     80\n 4    coffee     60\n 5   juice       90 \n ");
    scanf("%d",&item);

    switch(item)
    {
    case 1:
        {
        printf("You selected Noodles\n");
        printf("\n enter quantity:");
        scanf("%d",&n);
        total=200*n;
        printf("total bill:%d",total);
        break;
    }
    case 2:
        {
        printf("You selected Pizza\n");
        printf("\n enter quantity:");
        scanf("%d",&n);
        total=320*n;
        printf("total bill:%d",total);
        break;
    }
    case 3:
        {
        printf("You selected Sandwich\n");
        printf("\n enter quantity:");
        scanf("%d",&n);
        total=80*n;
        printf("total bill:%d",total);
        break;
    }
    case 4:
    {
        printf("You selected Coffee\n");
        printf("\n enter quantity:");
        scanf("%d",&n);
        total=60*n;
        printf("total bill:%d",total);
        break;
    }
    case 5:
        {
        printf("You selected Juice\n");
        printf("\n enter quantity:");
        scanf("%d",&n);
        total=90*n;
        printf("total bill:%d",total);
        break;
    }
    default:
    {
        printf("Not in menu");
        break;
    }

    }
    return 0;
}
