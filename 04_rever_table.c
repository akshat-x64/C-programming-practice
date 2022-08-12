// create a mmultliplication of given number

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, count = 10, num2 = 10;

    printf("Enter the value of num\n");
    scanf("%d", &num);

    while (count >= 1 && count <= 10)
    {
        printf("%d * %d = %d  \n ", num, num2, num * num2);
        count--;
        num2--;
    }

    return 0;
}
