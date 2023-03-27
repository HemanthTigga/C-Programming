#include<stdio.h>
int main()
{
    float eunit,ebill;
    scanf("%f",&eunit);
    if(eunit>250)
    {
        ebill = eunit*1.50;
    }
    else
    {
        if(eunit <50)
        {
            ebill = eunit*0.5;
        }
        else
        {
            ebill = 50*0.5;
            eunit = eunit-50;
            if(eunit>0)
            {
                ebill = ebill+eunit*0.75;
                eunit = eunit -100;
                if(eunit>0)
                {
                    ebill = ebill+eunit*1.2;
                    eunit = eunit -100;
                }
            }
        }
    }
    ebill = ebill*0.2 + ebill;
    printf("Electricity Bill = %.2f",ebill);
}
