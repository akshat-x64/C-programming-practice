// create multiplication table using loop

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a ,b=1;

    printf("Enter a number to get multiplication table : ");
    scanf("%d" ,&a);

    b=1;
    while (b<=10)
    {
        printf("%d  X  %d  =  %d  \n" ,a,b,a*b);
        b++;
    }
    
    return 0; 
}
