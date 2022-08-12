#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[1][2][3];

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
                

            {
                printf("Enter the value of %d %d %d: \n", i+1, j+1, k+1);
                scanf("%d\n", &a[i][j][k]);
            }
        }
    }

    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
                

            {
    printf("the value of %d %d %d   %u \n", i+1, j+1, k+1, &a[i][j][k]);
            }
        }
    }

    return 0;
}
