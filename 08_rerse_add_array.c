#include<stdio.h>
void revarr(int *arr){
for ( int i = 0; i < 5/2; i++)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[4-i];
    arr[4-i] = temp;
}
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5},sum = 0;
    for (int  i = 0; i < 5; i++)
    {
        printf("the value before reversing is %d \n",arr[i]);
    }
    revarr(arr);
     for (int  i = 0; i < 5; i++)
    {
        printf("the value after reversing is %d \n",arr[i]);
    }
    
     for (int  i = 0; i < 5; i++)
    {
        sum  = sum + arr[i];
    }
    printf("the sum of all array is %d\n",sum);
    return 0;
}
