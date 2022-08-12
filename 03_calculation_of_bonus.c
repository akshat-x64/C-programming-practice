// calculate the bonous by year

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int bonous=0,yoj,yol,tot_year;

    printf("Enter the year of joining \n");
    scanf("%d" ,&yoj);

    printf("Enter the year of leaving \n");
    scanf("%d" ,&yol);

    tot_year=yol-yoj;
    if(tot_year>3)

{

    bonous=2500;
    printf("bonous = %d \n" ,bonous);
}
    return 0;
}


