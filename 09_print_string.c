#include<stdio.h>

int main(int argc, char const *argv[])
{
    char aa[40] = "Akshat";
    char *a = aa;
    char i;
    while (*a != '\0')
    {
        printf("the letter is %c\n" ,*a);
        *a++;
    }
    
    return 0;
}
