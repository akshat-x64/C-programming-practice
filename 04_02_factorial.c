// factorial of a number using for loop

#include <stdio.h>
int  factorial(int num);
int main(int argc, char const *argv[])
{
    int num,total;

    printf("Enter a number to get factorial of it : \n");
    scanf("%d", &num);

    total = factorial(num);

    printf("the factorial of given number is %d\n" , total);
    return 0;
}

int  factorial(int num){
    int total = 1,t;
for (int sum = 1; sum <= num; sum++)
    {

      t=  total *= sum;
        
    }
return t;
}