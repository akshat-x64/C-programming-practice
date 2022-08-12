#include<stdio.h>


int main(int argc, char const *argv[])
{
    int aur[10];
    int *awe = aur;
    awe = awe +2;
    if (awe==&aur[2]  )
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}
