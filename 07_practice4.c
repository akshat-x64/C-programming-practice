#include<stdio.h>
void multufun(int num1,int num2,int *sum,int *avg);
int main(int argc, char const *argv[])
{
    int num1,num2,sum,avg;

    printf("Enter the value of num1\n");
    scanf("%d" ,&num1);
    printf("Enter the value of num2\n");
    scanf("%d" ,&num2);

    multufun(num1,num2,&sum,&avg);
    printf("the sum is %d\n",sum);
    printf("the average is %d \n",avg );
    return 0;
}
void multufun(int num1,int num2,int *sum,int *avg){


*sum = num1+num2;
*avg = (num1+num2)/2;




}