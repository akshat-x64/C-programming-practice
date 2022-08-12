#include<stdio.h>

int main(int argc, char const *argv[])
{
   int p,n,count=1;

    float r,si;
    
    while (count<=3)
    {
        printf("Enter the value of p,n,r\n");
        scanf("%d%d%f" ,&p,&n,&r);
        si=p*n*r/100;
        printf("Simple interest = Rs%f\n" ,si);
        count=count+1;
    }
    
    return 0;
}
