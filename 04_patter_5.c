#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, num = 5;

    
    for (j = 5; j >= 1; j--)
    {
        for (i=5; i >= 1; i--)
        {

            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
