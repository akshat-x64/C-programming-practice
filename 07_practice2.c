#include<stdio.h>
void passint(int a){

    printf("%u" ,&a);
}
int main(int argc, char const *argv[])
{
     static int i;
     i=10;
     printf("%d\n" ,i);
    printf("%u\n" ,&i );
    passint(i);
    return 0;
}
