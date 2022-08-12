#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *ptr;
    ptr  = fopen("sample.txt","w");
    while(ptr){
    fprintf(ptr,"ww");
    }
    
    return 0;
}
