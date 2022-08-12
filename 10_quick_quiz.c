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
    struct employee e1, e2, e3;
    e1.code = 123;
    e1.salary = 233.4;
    strcpy(e1.name, "Akshat");

    e2.code = 123;
    e2.salary = 233.4;
    strcpy(e2.name, "Ram");

    e3.code = 123;
    e3.salary = 233.4;
    strcpy(e3.name, "Shyam");
    return 0;
}
