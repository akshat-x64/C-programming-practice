#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, total;
    printf("Enter a number to check if its prime number of not\n");
    scanf("%d",&num1);

    num2 = num1;
    total = 0;
    while(num2 != 0)
    {
        
        num3 = num2 % 10;
        total = total + num3 * num3 * num3;
        num2 = num2 / 10;
    }

    if (total == num1)
    {
        printf("%d is armstrong number\n", num1);
    }
    else
    {
        printf("%d is not armstrong number\n", num1);
    }

    return 0;
}
