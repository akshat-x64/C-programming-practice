#include<stdio.h>
void calfab(int num ){
int a = -1,b = 1,c;
if (num > 0)
{  
    c = a + b;
        printf("%d  \n", c);
        a = b;
        b = c;
        calfab(num - 1);
    }
    
}



int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number of upto series\n");
    scanf("%d" ,&num);
    calfab(num);



    return 0;
}
