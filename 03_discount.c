// calculate  discount on certain level of items

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float dis = 0, tot, qty, rate;

    printf("Enter the no. of items\n");
    scanf("%f", &qty);

    printf("Enter the no. of rate\n");
    scanf("%f", &rate);

    if (1000 <qty )
        
    {
        dis = 10;
     
    }

   tot = (qty * rate) - (qty * rate * dis / 100);
        printf("total expences = %f \n"   , tot);
    return 0;
}
