#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr;
    int num;
    ptr = fopen("akshat.txt", "r");
    if (ptr == NULL)
    {
        printf("The file dosent exist");
    }
    else
    {

        fscanf(ptr, "%d", &num);
        printf("the value of num is %d\n", num);
        return 0;
    }
}
