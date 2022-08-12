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
    struct employee emp[20];
    struct employee b1= {23,32.45,"Akshat"};

    emp[1].code = 214;
    emp[1].salary = 21.12;
    strcpy(emp[1].name, "Ram");


    emp[2].code = 214;
    emp[2].salary = 21.12;
    strcpy(emp[2].name, "Shyam");

    return 0;
}
