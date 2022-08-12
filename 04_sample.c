#include<stdio.h>


int main(int argc, char const *argv[])
{
    int i,j,num;
     
    for(i=1;i<=5;i++){

        for(j=1;j<=9;j++){

            if(j<=4+i &&  j>=6-i){
                printf("%d" ,j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
