#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

int main(int argc, char const *argv[])
{
    struct employee e1;
    e1.code = 221;
    e1.salary = 220.225;
    strcpy(e1.name, "Akshat");

    printf("The code of employee e1 is: %d\n", e1.code);
    printf("The code of employee e1 is: %f\n", e1.salary);
    printf("The code of employee e1 is: %s\n", e1.name);

    return 0;
}
