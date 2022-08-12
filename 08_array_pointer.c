#include <stdio.h>
void changeval(int *yum)
{
    for (int i = 0; i < 5; i++)
    {
        printf("the value of yum%d is %d\n", i + 1, *yum);
        yum++;
    }
}

int main(int argc, char const *argv[])
{
    int yum[5];
    int *num;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of yum%d  \n", i + 1);
        scanf("%d", &yum[i]);
    }

    changeval(&yum[0]);

    return 0;
}
