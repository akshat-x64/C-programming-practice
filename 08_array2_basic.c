#include <stdio.h>
void dis(int *a)
{
    printf("%d " ,*a);
}
int main(int argc, char const *argv[])
{
    int arr[2][5];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            
        }
    }


for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
          dis(&arr[i][j]);
            
        }
    }

    return 0;
}
