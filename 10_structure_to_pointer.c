#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
}m1;
void display(m1 emp)
{
    printf("The code of employee e1 is: %d\n", emp.code);
    printf("The code of employee e1 is: %f\n", emp.salary);
    printf("The code of employee e1 is: %s\n", emp.name);
}
int main(int argc, char const *argv[])
{
    m1 e1;
    e1.code = 221;
    e1.salary = 220.225;
    strcpy(e1.name, "Akshat");
    display(e1);
}
