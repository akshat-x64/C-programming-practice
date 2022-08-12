// convert temperature from f to c
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float fer, cel;
    printf("Enter the value in fehrenheit to convert it into celsius\n");
    scanf("%f", &cel);

   fer=  (cel - 32) * 5/9; 
    printf("The converted value is %f", fer);
    return 0;
}
