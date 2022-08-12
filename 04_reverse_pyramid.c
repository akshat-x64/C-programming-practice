#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, num = 5;

    for (i = 1; i <= num; i++)
    {

        for (j = 1; j <= num; j++)
        {

            if (j >= i)
            {
                printf("%d" ,i);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}
