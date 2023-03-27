#include<stdio.h>
int main()
{
    float phy,chem,bio,math,comp;
    char grade;
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
    float percentage = ((phy+chem+bio+math+comp)/500 )*100;
    if(percentage<40)
        grade = 'F';
    else if(percentage>=40 && percentage<60)
        grade = 'E';
    else if(percentage>=60 && percentage<70)
        grade = 'D';
    else if(percentage>=70 && percentage<80)
        grade = 'C';
    else if(percentage>=80 && percentage<90)
        grade = 'B';
    else if(percentage>=90)
        grade = 'A';

    printf("Percentage = %.2f //% \n",percentage);
    printf("Grade: %c",grade);
    return 0;
}
