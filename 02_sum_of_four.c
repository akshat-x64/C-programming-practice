// write a program to add sum of 1st and last digit num
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, sum, total = 0, digit;
    printf("Enter a 4 digit number \n");
    scanf("%d", &num);

    digit = num % 10;
    sum = sum + digit;
    num = num / 10;

    digit = num % 10;
    num = num / 10;

    digit = num % 10;
    num = num / 10;

    digit = num % 10;
    sum = sum + digit;
    num = num / 10;
    printf("The value is %d \n", sum);

    return 0;
}
