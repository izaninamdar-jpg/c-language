#include <stdio.h>
#include <string.h>

typedef struct employees
{
    int id;
    float salary;
    char name[100];
    int phone_no;
} employees;

int main()
{
    employees e1, e2, e3;

    e1.id = 1;
    e2.id = 2;
    e3.id = 3;

    e1.salary = 1000.00;
    e2.salary = 2000.00;
    e3.salary = 3000.00;

    strcpy(e1.name, "izan");

    printf("%d\n", e1.id);
    printf("%s\n", e1.name);
    return 0;
}