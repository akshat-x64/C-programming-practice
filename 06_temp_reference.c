// calculate fiaobionci number

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1,num2,num3 = -1,num4 = 1,total;

    printf("Enter a number to print upto that fibionci number\n");
    scanf("%d" ,&num1);

    for (int i = 0; i < num1; i++)
    {    

        total = num3 + num4 ;
          
        printf("the series is %d \n " ,total);
        num3 = num4;
        num4 = total;

    }
    
    return 0;
}
