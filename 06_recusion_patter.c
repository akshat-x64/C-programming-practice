#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d" ,&a);

for (int i = 0; i < a; i++)
{
    for (int t = 0; t < (2*i-1); t++)
    {
        printf("*");
    }
    printf("\n");
}


    
    return 0;
}
