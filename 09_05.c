#include<stdio.h>

int main(int argc, char const *argv[])
{
    char  a[30]="Akshat";
    int i=0;
    char c;
    printf("Enter a character to checkin a specfic word\n");
    scanf("%c",&c);

    while (i<6)
    {
        if (a[i] == c)
        {
         printf("Chracter available in word");
         break;
        }
        i++;
        
    }
    
    return 0;
}
