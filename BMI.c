#include<stdio.h>
int main()
{
    float weight, height;
    scanf("%f%f",&weight,&height);
    float bmi = weight/(height*height);
    char s[20];
    if(bmi<15)
        sprintf(s,"Starvation");
    else if(bmi>15 && bmi<=17.5)
        sprintf(s,"Anorexic");
    else if(bmi>17.5 && bmi<=18.5)
        sprintf(s,"Underweight");
    else if(bmi>18.5 && bmi<=24.9)
        sprintf(s,"Ideal");
    else if(bmi>24.9 && bmi<=25.9)
        sprintf(s,"Overweight");
    else if(bmi>25.9 && bmi<=30.9)
        sprintf(s,"Obese");
    else if(bmi>=40)
        sprintf(s,"Morbidly Obese");

    printf("BMI = %f\n",bmi);
    printf("Grade: %s",s);
    return 0;
}
