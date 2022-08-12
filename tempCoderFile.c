#include<stdio.h>
void swapd(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(int argc, char const *argv[])
{
    int i,j;
    printf("Enter the value of i\n");
    scanf("%d" ,&i);
    printf("Enter the value of j\n");
    scanf("%d" ,&j);
    swapd(&i,&j);

    printf("the value of %d\n",i);
    printf("the value of %d\n",j);
}
