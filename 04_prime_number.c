// check weather a number is prime number or not

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, num2 = 0, num3;
    printf("Enter a number to check weather it is prime or not\n");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            num2 = 1;
            break;
        }
    }
    if (num2 == 1)
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }

    return 0;
}
