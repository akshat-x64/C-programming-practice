// to call within the function

#include<stdio.h>


void raipur();
void indore();
void dewas();

int main(int argc, char const *argv[])
{
    printf("now i am in main\n");
    raipur();
    
    
    printf("Now i am again in main\n");
    return 0;
}

void raipur(){
    printf("i am in raipur \n");
    indore();
}

void indore(){
    printf("i am in indore \n");
    dewas();
}

void dewas(){
    printf("i am in dewas \n");
}