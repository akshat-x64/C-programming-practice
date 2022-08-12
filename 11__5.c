#include<stdio.h>
int main(int argc, char const *argv[])
{
    char a1[10],a2[10];
    int n1,n2; 
    FILE *ptr;
    printf("Enter the name of a1\n");
    gets(a1); 
    printf("Enter the name of a2\n");
    gets(a2);
    printf("Enter the salary of a1\n");
    scanf("%d",&n2);
    printf("Enter the salary of a2\n");
    scanf("%d",&n2);

    ptr = fopen("employe.txt" ,"w");
    fprintf(ptr,"%s, %d\n",a1,n1);
    fprintf(ptr,"%s, %d\n",a2,n2);
    fclose(ptr);
    return 0;
}
