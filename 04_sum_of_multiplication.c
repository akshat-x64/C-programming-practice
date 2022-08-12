//calculate sum of multiplication of number occuring in table

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,sum=0 ,total=0,final=0;
    
    printf("Enter a number to get sum of multiplication of number occuring in table : ");
    scanf("%d" ,&num);


    while (sum<=10)
    {
        total=num*sum;
        printf(" %d * %d  = %d\n"  ,num,sum,total);
        sum++;
        final=total+final;
        
    }
    
    printf("sum of multiplication  %d\n"  ,final); 
           

    return 0;
}
