// check wether a number is prime number or not using do while loop

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum, total = 0;

    printf("Enter a number to check if its prime or not : ");
    scanf("%d", &num);

    sum = 1;
    do
    {

        if (num % sum == 1)

        {
            total = 1;

            break;
        }
        sum++;

    }

    while (sum < num);

    if (total == 1)
    {
        printf("Not a prime number\n");
    }
    else

    {

        printf("prime number\n");
    }

    return 0;
}
