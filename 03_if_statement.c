// sample if statement

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number less than 10\n");
    scanf("%d" ,&num);

    if (10>num)
    {
        printf("Excellent\n");
    }
    
    return 0;
}
