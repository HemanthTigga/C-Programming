#include<stdio.h>
struct emp{
    char *name;
    int age;
    float salary;
    int id;
};
void manager()
{
    struct emp manager;
    printf("Enter age of manager\n");
    scanf("%d",&manager.age);
    if(manager.age > 30)
        manager.salary = 30000.0;
    else
        manager.salary = 65000.0;

    printf("Manager's salary = %.2f\n",manager.salary);
}
int main()
{
    manager();
    struct emp emp1,emp2;
    printf("enter salary of 2 employee\n");
    scanf("%d",&emp1.salary);
    printf("First Employee's salary = %d\n",emp1.salary);
    scanf("%d",&emp2.salary);

    printf("Second Employee's salary = %d\n",emp2.salary);
    return 0;
}
