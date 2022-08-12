#include<stdio.h>

int main(int argc, char const *argv[])
{
    char  a[30] = "medicapps";
    int b=0;
    int c=0;
    while (a[c]!='\0')
    {
        b++;
        c++;
    }
    printf("the charaters in string is %d\n",b);
    return 0;
}
