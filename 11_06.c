#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr;
    char a;
    ptr = fopen("akshat.txt", "r");
    a = fgetc(ptr);
    while (a != EOF)
    {
        printf("%c", a);
        a = getc(ptr);
    }

    return 0;
}
