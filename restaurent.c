#include<stdio.h>
int main()
{
    printf("* * * * * * * * Menu * * * * * * * *\n\n");
    printf("Sr          item_name            price\n");
    printf("1             Pizza               100\n");
    printf("2             Pasta               200\n");
    printf("3             Noodles             150\n");
    printf("4             Coffee              90\n");
    printf("5             Sandwich            50\n");

    int price[] ={100,200,150,90,50};
    int bill,item_no,quantity;
    char decision;
    while(1)
    {
        printf("Choose any item: ");
        scanf("%d",&item_no);

        printf("Enter Quantity: ");
        scanf("%d",&quantity);
        if(item_no == 1)
        {
            bill = 100*quantity;
        }
        else if(item_no == 2)
        {
            bill = 200*quantity;
        }
        else if(item_no == 3)
        {
            bill = 150*quantity;
        }
        else if(item_no == 4)
        {
            bill = 90*quantity;
        }
        else if(item_no == 5)
        {
            bill = 50*quantity;
        }
        else{
            printf("wrong item");
            break;
        }
        printf("BILL = %d\n",bill);
        printf("Do you want to continue?");
        char decision1;
        scanf("%c",&decision1);
        scanf("%c",&decision);
        if(decision == 'n')
            break;

        bill =0;
        item_no=0;
        quantity =0;
    }
    return 0;
}
