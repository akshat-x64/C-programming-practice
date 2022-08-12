#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr = fopen("akshat.txt","w");
    fprintf(ptr ,"This is a sample text\n");

    fprintf(ptr ,"This is a sample text\n");

    fprintf(ptr ,"This is a sample text\n");
    return 0;
}
