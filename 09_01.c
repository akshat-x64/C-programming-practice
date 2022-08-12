#include<stdio.h>

int main(int argc, char const *argv[])
{
  char a[] = "Akshat";
  char b[30];

  int i=0;
  char w;
  while (i<=7)
  {
    fflush(stdin);
    printf("Enter a word by \n");
    scanf("%c",&w);
    b[i] = w;
    i++;
  }
  b[i-1] = '\0';
  printf("the word is %s\n" ,a);
  printf("the word is %s\n",b);
  return 0;
}
