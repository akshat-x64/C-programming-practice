#include <stdio.h>

int main(int argc, char const *argv[])
{
    char num;
    printf("Enter a value less than or equal to a to b : ");
    scanf("%c", &num);

    switch (num)
    {

    case 'a':
    case 'A':

        printf("good");
        break;

    case 'b':
    case 'B':

        printf("good");
        break;

    case 'c':
    case 'C':

        printf("good");
        break;

    case 'd':
    case 'D':

        printf("good");
        break;

    default:
        printf("not good");
    }

    return 0;
}
