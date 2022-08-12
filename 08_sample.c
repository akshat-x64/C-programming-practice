#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[2][2], arr2[2][2], addarr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr\n");
            scanf("%d",&arr[i][j]);
        }
    }
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr2\n");
            scanf("%d",&arr2[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            addarr[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", addarr[i][j]);
        }
        printf("\n");
    }
    return 0;
}