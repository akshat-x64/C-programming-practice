#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5}, arr2[5];
    for (int i = 0; i < 5; i++)
    {
        printf("the value of arr is %d \n", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        arr2[i]=arr[i] ;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of arr2 is %d \n", arr2[i]);
    }
    return 0;
}
