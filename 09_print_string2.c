#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char *a ;
    int b;
    printf("Enter full name\n");
    gets(a);
    b  =  strlen(a);
    printf("%s\n" ,a);
    printf("the length of string is %d",b);
    return 0;
}
