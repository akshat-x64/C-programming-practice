#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE   *ptr;
    int a,b;
    ptr = fopen("q1.txt" ,"r");  
    fscanf(ptr,"%d" ,&a);
    fscanf(ptr,"%d" ,&b);
    printf("The value of a and b is %d %d" ,a,b );
    fclose(ptr);
    return 0;
}
