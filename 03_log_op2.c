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

    if (per >= 60  &&  (sub1>40)  &&  (sub2>40)  && (sub3>40)  && (sub4>40)  && (sub5>40)  )
    {
        printf("First division\n");
    }

    else
    {

        if ((per < 60) && (per >= 51)   &&  (sub1>40)  &&  (sub2>40)  && (sub3>40)  && (sub4>40)  && (sub5>40) )
        {
            printf("second division\n");
        }

        else

        {

            if ((per <=50) && (per >= 41)   &&      (sub1>40)  &&  (sub2>40)  && (sub3>40)  && (sub4>40)  && (sub5>40) )
            {
                printf("third division\n");
            }

            else
            {

                printf("Fail!\n");
            }
        }

    }
    printf("your percentage is  %d  \n", per);

    return 0;
}
