// calculate percentage
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    float c, d;
    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%f", &c);
    d = a * b * c / 100;

    printf("The value of given value is %f", d);

    return 0;
}
