#include <stdio.h>

int main(int argc, char const *argv[])
{
    int value;
    printf("Enter a value 1 or 2\n");
    scanf("%d", &value);

    if (value == 1)
        printf("Your are going to heven\n");

    else
    {

        if (value == 2)
            printf("Your are going to heven1\n");

        else
            printf("You are going to hell");
    }
    return 0;
}
