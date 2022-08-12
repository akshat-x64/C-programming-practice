#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3], b[3][3], c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of 9 values a of %d %d\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of 9 values b of %d %d\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            
        }
        printf("\n");
    }

    
for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            printf("%d   " ,c[i][j]);
        }
        printf("\n");
    }


    return 0;
}
