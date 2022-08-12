// prime fabonnaci series

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2 = -1, num3 = 1, num4;

    printf("Enter a number to primet upto that series\n");
    scanf("%d", &num1);

    for (int i = 0; i < num1; i++)
    {
        num4 = num3 + num2;

        printf("%d \n", num4);
        num2 = num3;
        num3 = num4;
    }

    return 0;
}
