#include <stdio.h>
int total(int x, int y, int z);
int main(int argc, char const *argv[])
{

    int num1, num2, num3, sum;
    printf("Enter the value of num1\n");
    scanf("%d", &num1);
    printf("Enter the value of num2\n");
    scanf("%d", &num2);
    printf("Enter the value of num3\n");
    scanf("%d", &num3);
    sum = total(num1, num2, num3);
        printf("the sum of given number is %d\n", sum);
}

int total(int x, int y, int z)
{
    int a;
    a=x+y+z;
    return(a+10);
}