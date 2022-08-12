#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1[] = {1,2,3,4,5},odd=0,even=0;
    for (int  i = 0; i < 5; i++)
    {
        if (num1[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("There are %d even numbers\n",even);
    printf("There are %d odd numbers\n",odd);
    return 0;
}
