// check the given year is leap year or not

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year to check weather it is leap year or not\n");
    scanf("%d" ,&year);


    
 if ((year%4==0)  &&  (year%100==0)   &&   (year%400==0))
 {
     printf("%d is leap year\n"  ,year);
 }
   
    
    else
    printf("%d is not leap year\n"  ,year);
    return 0;
}
