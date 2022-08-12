// Write a program to find sum of 5 digit number
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num, sum = 0, value, digit;
  printf("Enter a five digit number  \n");
  scanf("%d", &num);

  value = num % 10;  //5
  sum = value + sum; //5
  num = num / 10;

  value = num % 10;
  sum = value + sum;
  num = num / 10;

  value = num % 10;
  sum = value + sum;
  num = num / 10;

  value = num % 10;
  sum = value + sum;
  num = num / 10;

  value = num % 10;
  sum = value + sum;
  num = num / 10;

  printf("the sum of 5 digit number is %d  \n", sum);

  return 0;
}
