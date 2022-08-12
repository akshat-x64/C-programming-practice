#include <stdio.h>
#include <string.h>

struct date
{
    int year;
    int month;
    int day;
};
   int  compre(struct date m1, struct date m2)
{
    if (m1.year > m2.year)
    {
        return 1;
    }
    
    if (m1.month > m2.month)
    {
        return 1;
    }
    
    if (m1.day > m2.day)
    {
        return 1;
    }
    
}
int main(int argc, char const *argv[])
{
    struct date m1 = {2002, 5, 22};
    struct date m2 = {2002, 5, 21};

    
    int m3 = compre(m1, m2);
    if (m3==1)
    {
      printf("the date m1 is higher");
    }
    else
    {
        printf("the date m2 is higher");
    }
    
    return 0;
}
