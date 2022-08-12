#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("q1.txt", "r");
    ptr2 = fopen("q2.txt", "w");
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
        
    while (c != EOF)
    {
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr2);
    fclose(ptr1);

    return 0;
}
