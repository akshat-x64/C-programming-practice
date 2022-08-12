// print reverse * triangle in c language

#include <stdio.h>

int main(int argc, char const *argv[])
{
   int num, i = 0, sum;

   printf("Enter a value of num to print that lines of triangle : ");
   scanf("%d", &num);
   
   for (num; num >= 1; num--)
   {

      for (i = 0; i < num; i++)
      {

         printf("*");
      }

      printf("\n");
   }

   return 0;
}
