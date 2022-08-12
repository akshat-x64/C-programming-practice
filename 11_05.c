#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE  *ptr;
    ptr = fopen("akshat.txt" ,"w");
    putc('a',ptr);
    return 0;
}
