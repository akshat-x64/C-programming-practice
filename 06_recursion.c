#include <stdio.h>

int factorial(int x); // funtion prototype
int main(int argc, char const *argv[])
{
    int num1;

    printf("Enter a number to calculte its factorial\n");
    scanf("%d", &num1);

    
    printf("The factorial of %d is %d\n", num1 ,factorial(num1));
    return 0;
}

int factorial(int x) // function definition
{
    
    if (x == 1 || x == 0)
    {
        return (1);
    }
    else
    {
        return x * factorial(x - 1);
    }
}