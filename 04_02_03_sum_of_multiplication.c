// calculate the sum of multiplication in for loop

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,multi=0,sum=0,final=0;


    printf("Enter a number to find sum of its products : ");
    scanf("%d" ,&num);

 sum = 1;
    do{
        multi  =   num*sum;
        printf("%d  *  %d   =  %d\n"  ,num,sum,multi);
        final=final+multi;
        sum++;
    }
    while( sum <= 10);


    printf("the sum of multiplication of given number is %d\n"   ,final);
    return 0;
}
