// calculate fibonnaci using recursion

#include <stdio.h>
int calfab(int s)
{

    if (s == 0)
    {
        return 0;
    }
    else if (s == 1)
    {
        return 1;
    }
    else
    {
        return (s - 1) + (s - 2);
    }
}
int main(int argc, char const *argv[])
{
    int num, i, num1 = 0;
    printf("Enter a number to print upto that terms :\n");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("The number is %d\n", calfab(num1));
        num1++;
    }

    return 0;
}
