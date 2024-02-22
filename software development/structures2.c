#include<stdio.h>
#include<string.h>
void main()
{
    system("CLS");
    struct employee
    {
        char name[10];
        int age;
        float salary;
    };
    struct employee
    e1={"Sanjay", 53, 75000.00};
    struct employee e2, e3;
    strcpy(e2.name,e1.name);
    e2.age=e1.age;
    e2.salary=e1.salary;
    printf("\n %s %d %f",e1.name,e1.age,e1.salary);
    printf("\n %s %d %f",e2.name,e2.age,e2.salary);
    printf("\n %s %d %f",e1.name,e1.age,e1.salary);
}