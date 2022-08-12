#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tab[10], tab2[10], tab3[10];
    // int num1,num2,num3;

    // printf("Enter the value to make its table :\n");
    // scanf("%d" ,&num1);
    // printf("Enter the value to make its table :\n");
    // scanf("%d" ,&num2);
    // printf("Enter the value to make its table :\n");
    // scanf("%d" ,&num3);
    for (int i = 0; i < 10; i++)
    {
        tab[i] = (i + 1) * 2;
        tab2[i] = (i + 1) * 7;
        tab3[i] = (i + 1) * 9;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("*****************************************************\n");
        printf("The value of %d * %d is %d\n", 2, i + 1, tab[i]);
    }
    for (int i = 0; i < 10; i++)
    {
printf("*****************************************************\n");
        printf("The value of %d * %d is %d\n", 7, i + 1, tab2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
printf("*****************************************************\n");
        printf("The value of %d * %d is %d\n", 9, i + 1, tab3[i]);
    }
    return 0;
}
