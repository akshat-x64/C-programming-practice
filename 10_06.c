#include<stdio.h>
#include<string.h>

struct customer
{
    char name[30];
    int AccNo;
    int amount;
};
int main(int argc, char const *argv[])
{
    struct customer rajesh;
    strcpy(rajesh.name,"Rajesh Debangen");
    rajesh.AccNo = 123545;
    rajesh.amount = 22000;
    printf("the name of custome %s\n",rajesh.name);
    printf("the name of  account number %d\n",rajesh.AccNo);
    printf("the name of amount %d\n",rajesh.amount);
    return 0;
}
