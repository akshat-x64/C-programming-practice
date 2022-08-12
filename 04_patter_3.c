// print from 1 to 5 5 time

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, num = 5, j;

    for (j = 1; j <= num; j++)
    {
        for (i = 0; i < num; i++)
        {
            printf("%c ", i + 65);
        }

        printf("\n");
    }

    return 0;
}
