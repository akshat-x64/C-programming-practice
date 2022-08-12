#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr = fopen("akshat.txt" ,"r");
    ptr = fopen("akshat.txt" ,"w");
    fclose(ptr);
    return 0;
}
