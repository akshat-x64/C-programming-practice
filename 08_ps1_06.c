#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[5];
    int num1 = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter any 5  number one by one  either positive or negative \n");
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        if (arr[j] + arr[j] <= 0)
        {
            num1++;
        }
        else
        {
            continue;
        }
    }
    printf("the value of + digits is %d \n", 5 - num1);
    return 0;
}
