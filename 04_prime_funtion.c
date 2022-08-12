

#include <stdio.h>
void calfac(); //funtion prototype
int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a number to check if its prime or not : ");
    scanf("%d", &num);

    calfac(num); // funtion call

    return 0;
}
void calfac(int num) //function declaration
{
   
    int sum, total = 0;
    sum = 0;
    do
    {

        if (num % sum == 1)

        {
            total = 1;

            break;
        }
        sum++;

    }

    while (sum < num;

    if (total == 1)
    {
        printf("Not a prime number\n");
    }
    else

    {

        printf("prime number\n");
    }
}