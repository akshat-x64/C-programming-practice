#include<stdio.h>
int main(int argc, char const *argv[])
{
    FILE *ptr;
    int num;
    ptr = fopen("akshat.txt" ,"r");
    fscanf(ptr ,"%d" ,&num);
    fclose(ptr);
    ptr = fopen("akshat.txt" ,"w");
    fprintf(ptr,"%d" ,num*2);
    fclose(ptr);
    return 0;
}
