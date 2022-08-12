#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    FILE *ptr;
    printf("Enter a number to print its table\n");
    scanf("%d", &num);
    ptr = fopen("q1.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", num, i, num * i);
    }
    fclose(ptr);
    printf("Task went successfully");
    return 0;
}
