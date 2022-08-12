#include<stdio.h>

int main(int argc, char const *argv[])
{
        int i,*num1,**num2;
        i= 10;
        num1 = &i;
        num2 = &num1;
        printf("the value of i is %d\n",i);
        printf("the value of i is %u\n",&i);
        printf("the value of i is %d\n",num1);
        printf("the value of i is %d\n",*num2);
        printf("the value of i is %d\n",**num2);
    return 0;
}
