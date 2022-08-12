#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    int num,num2;
    ptr = fopen("akshat.txt" ,"r");
    fscanf(ptr ,"%d",&num);
    
    printf("the value of num is %d\n",num);
    fscanf(ptr ,"%d",&num2);
    printf("the value of num2 is %d\n",num2);
    fclose(ptr);
    return 0;
}
