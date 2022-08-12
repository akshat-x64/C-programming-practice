#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, n, m;
    
    a = 1;
    while (a <= 3)
    {
        n = 1;
        while (n <= 2)
        {
            m = a + n;
            printf("a = %d  n = %d m = %d\n", a, n, m);
            n++;
        }
        a++;
    }
    return 0;
}
