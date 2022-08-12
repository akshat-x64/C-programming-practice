// calculate sum of 10 natural numbers using 

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,sum=0;
    num=1;

    do{
      
 
    sum=num+sum;
    num++;

    }while(10>=num);

printf("sum of ten natural numbers is %d\n", sum);

    return 0;
}
