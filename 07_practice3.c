#include<stdio.h>
void cngval(int *i){
*i = (*i) *10;
}
int main(int argc, char const *argv[])
{
      int i;
      printf("Enter the value of i \n");
      scanf("%d",&i);
      printf("the value of i is %d \n" ,i );
      printf("the address of i is %u\n" ,&i );
      cngval(&i);
      printf("the value of i is %d \n" ,i );
return 0;
}