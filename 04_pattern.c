// print c pattern * triangle


#include<stdio.h>


int main(int argc, char const *argv[])
{
    int num,sum=0, i;
    printf("Enter a number to print that length of pryamid : ");
    scanf("%d" ,&num);


    for(int a=0; a<num; a++){

        for (i = 0; i < a+1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


