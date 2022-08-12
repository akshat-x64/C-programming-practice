// check and how to use ternairy operator

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number less than 10\n");
    scanf("%d" ,&num);

   (num<10) ? printf("correct\n")  :   printf("Wrong\n");
    return 0;
}
