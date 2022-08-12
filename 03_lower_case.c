// check weather the character is lower case or not

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    printf("Enter a lower case number\n");
    scanf("%c"  ,&c);


    if(c>=97  &&  c<=122)


    printf("%c is a lower case number\n" ,c);
    else

     printf("%c is not  a lower case number\n" ,c);


    return 0;
}
