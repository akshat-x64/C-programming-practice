#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    float *ptr;
    ptr = (float *)malloc(6*sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d\n",i+1);
        scanf("%f" ,&ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("the value of %d   %.1f\n",i+1,ptr[i]);
        
    }
    return 0;
}
