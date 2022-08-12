// calculate weather a triangle is valid or not

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter the angle of a\n");
    scanf("%d", &a);

    printf("Enter the angle of b\n");
    scanf("%d", &b);

    printf("Enter the angle of c\n");
    scanf("%d", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The triangle is valid\n");
    }
    else

        printf("The triangle is not valid\n");
    return 0;
}
