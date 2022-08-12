// calculate sum of 10 natural numbers

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num ,sum=1;
    
    num=1;
    while(10>=num)
    {
        printf("the sum of natura numbers  %d \n "  ,sum);
        
        num+=1;
        sum=num+sum;
    }
    return 0;
}
