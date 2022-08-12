#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,num=4;


    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)

        {
            if((i==0)||(j==0)||(i==num-1)||(j==num-1))
            printf("*");
            else
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}
