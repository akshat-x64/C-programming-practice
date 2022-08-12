#include<stdio.h>
int nnum(int x);  // function prototype
int main(int argc, char const *argv[])
{
       int num1,num2;

       printf("Enter a number to add sum of that given number \n");
       scanf("%d" ,&num1);
       num2 = nnum(num1);
       printf("the sum of n number is %d" ,num2);
return 0;
}

int nnum(int x){
    if ( x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return x+nnum(x-1);
    }
    
}