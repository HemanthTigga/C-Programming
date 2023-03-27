#include<stdio.h>
int main()
{
    printf("Enter price");
    int price;
    scanf("%d",&price);
    if(price> -1){
    printf("500 rupee notes = %d\n",price/500);
    price = price%500;

    printf("100 rupee notes = %d\n",price/100);
    price = price%100;

    printf("50 rupee notes = %d\n",price/50);
    price = price%50;

    printf("20 rupee notes = %d\n",price/20);
    price = price%20;

    printf("10 rupee notes = %d\n",price/10);
    price = price%10;

    printf("5 rupee notes = %d\n",price/5);
    price = price%5;

    printf("2 rupee notes = %d\n",price/2);
    price = price%2;

    printf("1 rupee notes = %d\n",price);
    //price = price%1;
    }
    else
    {
        printf("invalid price");
    }
    return 0;
}
