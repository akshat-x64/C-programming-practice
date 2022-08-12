#include<stdio.h>

int main(int argc, char const *argv[])
{
    // char a[] ={'a','k','s','h','a','t','\0'};
    char a[30]="Akshat";
    
    printf("%s\n" ,a);
    for (int  i = 0; i < 6; i++)
    {
        printf("the address is %u\n",&a[i]);
    }
    
    
    return 0;
}
