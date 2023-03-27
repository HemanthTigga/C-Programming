#include<stdio.h>
struct{
    char *name1,*address1;
    int roll1;
    float c,j,d,avg;
}student1, student2;
int main()
{
    /*student1.name1 = "Hemanth";
    student1.address1 = "wbgdndskf sbn";*/
    student1.roll1 = 479;
    student1.c = 100.0;
    student1.j = 95.5;
    student1.d = 95.0;
    char str[100];
    scanf("%s",str);
    student1.name1 = str;
    scanf("%s",str);
    student1.address1 = str;
    student1.avg = (student1.c+student1.j+student1.d)/3.0;

    printf("\nAverage = %f \nAddress = %s\n",student1.avg,student1.address1);

    /*student2.name1 = "Garvit";
    student2.address1 = "wbgdndskf sbn";*/
    student2.roll1 = 490;
    student2.c = 1001.0;
    student2.j = 951.5;
    student2.d = 951.0;

    scanf("%s",str);
    student2.name1 = str;
    scanf("%s",str);
    student2.address1 = str;
    student2.avg = (student2.c+student2.j+student2.d)/3.0;
    printf("\nAverage = %f \nAddress = %s\n",student2.avg,student2.address1);
    return 0;
}
