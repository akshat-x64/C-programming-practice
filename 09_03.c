// chop a full name to only name
#include<stdio.h>
void chop(char *chop1,char *bb){
        
        int i=0;
        while (i!=6)
        {
            bb[i] = chop1[i];
            i++;
        }
       bb[i]    = '\0';
        

}
int main(int argc, char const *argv[])
{
    char aa[30]   = "Akshat dwivedi";
    char bb[30];  
        chop(aa,bb);
        printf("the word in aa %s\n" ,aa);
        printf("the word after is %s\n",bb);
    return 0;
}
