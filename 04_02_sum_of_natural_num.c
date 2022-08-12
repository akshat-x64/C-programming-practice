// calculate sum of 10 natural numbers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0;

             for (num = 1; num <= 10; num++)
    {
              sum=sum+num;
    }

    printf("sum of ten natural numbers is %d\n", sum);

    return 0;
}
