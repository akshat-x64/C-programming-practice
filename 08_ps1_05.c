// how to revrse an array

#include <stdio.h>

void revaRR(int *num1)
{
    int temp;
    printf("%d", num1);
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = num1[i];
        num1[i] = num1[6 - i];
        num1[6 - i] = temp;
    }
}
int main(int argc, char const *argv[])
{
    int num1[7];

    for (int i = 0; i < 7; i++)
    {
        printf("Enter the value of num%d\n", i + 1);
        scanf("%d", &num1[i]);
    }
    
    revaRR(num1);

    for (int i = 0; i < 7; i++)
    {
        printf("the value of num%d  is %d\n", i + 1, num1[i]);
    }

    return 0;
}
