//convert temperature from celsius to fahrenheit

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int cel,fer;
    printf("Enter the value in c to convert it into fahrenheit\n");
    scanf("%d" ,&cel);
    fer=(cel * 9/5) + 32;
    printf("fahrenheit =  %d"   , fer); 
    return 0; 
}
