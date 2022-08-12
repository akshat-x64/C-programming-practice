// Find out factorial of given number using do while loop

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,sum,factorial=1;
    printf("Enter a number to find factorial of given number :");
    scanf("%d"  ,&num);
     
    sum=1;

    do
    {
        factorial=sum*factorial;
        sum++;

    } while (sum<=num);
    

    printf("The value of given number is %d\n" ,factorial);
    return 0;
}
