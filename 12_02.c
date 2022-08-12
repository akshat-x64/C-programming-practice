#include<stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *ptr;
    ptr = (int *)malloc(6*sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d\n",i+1);
        scanf("%d" ,&ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d   %d\n",i+1,ptr[i]);
        
    }
    return 0;
}
