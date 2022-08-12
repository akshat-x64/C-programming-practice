#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, sum, a;
    // printf("Enter a number to check if its armstrong or not:\n");
    // scanf("%d", &num1);
    for (num1 = 1; num1 <= 1000; num1++)
    {
        sum = 0;
        num2 = num1;
        while (num2 != 0)
        {
            a = num2 % 10;
            sum = sum + a * a * a;
            num2 = num2 / 10;
        }

        if (num1 == sum)
        {
            printf("the value %d is armstrong\n", num1);
        }
        else
        {
            printf("the value %d is not armstrong\n", num1);
        }
        }

    return 0;
}
