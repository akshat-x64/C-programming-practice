//do multliplication in reverse order

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter a number to find out multiplication in reverse order : ");
    scanf("%d" ,&a);
    
    b=10;
    while(b>=1)
    {
    printf("%d  X  %d  =  %d  \n" ,a,b,a*b);
    b--;
    
    }
    return 0;
}
