#include<stdio.h>
void swapv(int x,int y);
int main(int argc, char const *argv[])
{
    int a=10,b=20;
     swapv(a,b);
     printf("The value of a = %d b = %d\n",a,b);
    return 0;
}
void swapv(int x,int y){
    int z;
    z=x;
    x=y;
    y=z;
    printf("The value of x = %d y = %d\n",x,y);
}