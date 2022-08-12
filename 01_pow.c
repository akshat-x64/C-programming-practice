#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a ,b;
    printf("Enter a number to be divided \n");
    scanf("%d" ,&a);
    b=100%a;
    printf("the value is %d \n" ,b);
    return 0;
}
