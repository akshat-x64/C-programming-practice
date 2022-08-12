#include<stdio.h>
int calavg();
int main(int argc, char const *argv[])
{
    int num1,num2,num3,avg;
    printf("Enter the value of num1\n");
    scanf("%d" ,&num1);
    printf("Enter the value of num2\n");
    scanf("%d" ,&num2);
    printf("Enter the value of num3\n");
    scanf("%d" ,&num3);

    avg=calavg(num1,num2,num3);
    printf("the avg og given number is %d\n" ,avg);
    return 0;
}
int calavg(int a,int b,int c){
    int z;
    z=(a+b+c)/3;
    return(z);
}