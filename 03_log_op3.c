//calclate the grade by calculating percentaage

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sub1, sub2, sub3, sub4, sub5, per = 0;

    printf("Enter the number of sub1\n");
    scanf("%d", &sub1);

    printf("Enter the number of sub2\n");
    scanf("%d", &sub2);

    printf("Enter the number of sub3\n");
    scanf("%d", &sub3);

    printf("Enter the number of sub4\n");
    scanf("%d", &sub4);

    printf("Enter the number of sub5\n");
    scanf("%d", &sub5);

    per = (sub1 + sub2 + sub3 + sub4 + sub5) * 100 / 500;

    if (per >= 60)
    {
        printf("first  division\n");
    }
   else if ((per < 60) && (per >= 51))
    {
        printf("Second division\n");
    }

    else if ((per < 50) && (per >= 41))
    {
        printf("third division\n");
    }

     else if (per < 40)
    {
        printf("fail\n");
    }

    printf("your percentage is  %d  \n", per);

    return 0;
}
