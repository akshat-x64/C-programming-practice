
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter a number to find out multiplication in reverse order : ");
    scanf("%d" ,&a);
    
    
    for(b=10;b>=1;b--)
    {
    printf("%d  X  %d  =  %d  \n" ,a,b,a*b);
    
    
    }
    return 0;
}
