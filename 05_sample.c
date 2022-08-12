#include<stdio.h>
int fun(int l);
int main(int argc, char const *argv[])
{
   int a;
   fun(a);
   printf("%d" ,&a);
   return 0;
}

int fun(int l)
{
    int l;
    printf("Enter a number");
    scanf("%d" ,&l );
    if (l>=10  &&  l<=90)
    {
        return(l);
    }
    else
    {
        return(l+32);
    }
    
}