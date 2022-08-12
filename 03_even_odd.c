// to find out weather a number is even or odd

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number to find out it is even or odd\n");
    scanf("%d" ,&num);

    if(num%2==0)
    printf("%d is even\n" ,num);

    else
    printf("%d is odd\n" ,num);
    return 0;
}
