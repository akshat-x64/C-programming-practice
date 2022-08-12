#include<stdio.h>

int main(int argc, char const *argv[])
{
    int tab[10];
    int num1;

    printf("Enter the value to make its table :\n");
    scanf("%d" ,&num1);
    for ( int i = 0; i < 10; i++)
    {
        tab[i] =(i+1)  * num1;
    }
         for ( int i = 0; i < 10; i++)
    {
      
         printf("The value of %d * %d is %d\n" ,num1,i+1,tab[i]);
          }
      
    return 0;
}
