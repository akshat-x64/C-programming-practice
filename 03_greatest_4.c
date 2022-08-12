// calculate the greatest of 3 digit number

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the value of num1\n");
    scanf("%d", &num1);

    printf("Enter the value of num2\n");
    scanf("%d", &num2);

    printf("Enter the value of num3\n");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is greatest", num1);
        }
    }
    else
    {

        if (num2 > num1)
        {
            if (num2 > num3)
            {
                printf("%d is greatest", num2);
            }
            else
            
                printf("%d is greatest", num3);
        }       
               
        }

            return 0;
}
