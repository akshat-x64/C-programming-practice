// calculate the price of 1 item //

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int item = 15;
    int profit, sel;
    int cost_one, cost_two;
    printf("Enter the selling price of 15 items\n ");
    scanf("%d", &sel);

    printf("Enter the profit of 15 items\n ");
    scanf("%d", &profit);

    cost_one = sel - profit;
    cost_two = cost_one / 15;

    printf("the cost of one item is %d\n", cost_two);

    return 0;
}
