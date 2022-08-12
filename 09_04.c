#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char aa[30] = "Bltibu☺";
    char bb[30];
      
    int i =0;
    int b= strlen(aa);
    printf("the value of b is %d\n",b);
    while (i<=b)
    {
        bb[i] = aa[i]-1;
        i++;
    }
    bb[i]  = '\0';
    printf("the word is %s\n",aa);
    printf("the word is %s\n",bb);
    return 0;
}
