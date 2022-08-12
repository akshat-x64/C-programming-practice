#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    int num1;
    printf("Enter the value of num1\n");
    scanf("%d" ,&num1);
    ptr = fopen("q1.txt","w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%d  x  %d = %d\n",num1,i,num1*i);
    }
    fclose(ptr);
    printf("TAsk completed successfully");
    return 0;
}
