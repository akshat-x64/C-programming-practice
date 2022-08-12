#include <stdio.h>
void factorial(int num, int *num1)
{
    int x;

    for (x = 1; x <= num; x++)
    {
        *num1 = *num1 * x;
    }
}
int main(int argc, char const *argv[])
{
    int num, num1 = 1, num2;
    printf("Enter a number to find out factorial\n");
    scanf(" %d", &num);

    factorial(num, &num1);
    printf("the factorial of number %d  is %d \n", num, num1);
    return 0;
}

