// greatest of ages

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ram, shyam, ajay;

    printf("Enter the age of ram\n");
    scanf("%d", &ram);

    printf("Enter the age of shyam\n");
    scanf("%d", &shyam);

    printf("Enter the age of ajay\n");
    scanf("%d", &ajay);

    if ((ram > shyam) && (ram > ajay))
    {
        printf("%d is older", ram);
    }
    else if ((shyam > ram) && (shyam > ajay))
    {
        printf("%d   is older", shyam);
    }
    else if ((ajay > ram) && (ajay > shyam))
    {
        printf("%d is older", ajay);
    }

    return 0;
}
