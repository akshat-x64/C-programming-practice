#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    int num;
    printf("Enter the value of num\n");
    scanf("%d", &num);
    ptr = (int *)calloc(num , sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("Enter the value of %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("The value of %d is %d\n", i + 1, ptr[i]);
    }
    ptr =realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d is %d\n", i + 1, ptr[i]);
    }
    return 0;
}