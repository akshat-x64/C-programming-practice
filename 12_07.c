#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d\n", i + 1);
        scanf("%d", &ptr[i]);
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d   %d\n", i + 1, ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d\n", i + 1);
        scanf("%d", &ptr[i]);
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("the value of %d   %d\n", i + 1, ptr[i]);
    }
    return 0;
}
