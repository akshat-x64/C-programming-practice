#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, num;

    printf("Enter the value of num : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {

        for (j = 0; j < num; j++)
        {

            if (i + j >= num -1)
            {

                printf("*");
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
