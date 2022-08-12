#include<stdio.h>
#include<string.h>
typedef struct  complex 
{
        int real;
        int complex;

}noob;
noob display(noob m2)
{
    printf("the value of real is %d\n",m2.real);
    printf("the value of complex : %d\n",m2.complex);
}
int main(int argc, char const *argv[])
{
    noob m1[5];
    for (int  i = 0; i < 5; i++)
    {
        printf("Enter the value of real\n");
        scanf("%d" ,&m1[i].real);
        printf("Enter the value of complex\n");
        scanf("%d" ,&m1[i].complex);
    }
    for (int  i = 0; i < 5; i++)
    {
        display(m1[i]);
    }
    
    return 0;
}

;
