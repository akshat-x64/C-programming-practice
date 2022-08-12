// find out its prime number or not using for loop

#include <stdio.h>
void prime(int);
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number to check if its prime number or not : ");
    scanf("%d", &num);
    prime(num);

    return 0;
}
void prime(int num)
{
    int sum, total = 0;
    for (sum = 2; sum < num; sum++)
    {
        if (num % sum == 0)
        {
            total = 1;
            break;
        }
    }
    if (total == 1)
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("this is a prime number\n");
    }
}