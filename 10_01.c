#include <stdio.h>
#include <string.h>
struct vector
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    struct vector v1,v2;
    v1.x=2;
    v1.y=4;
    printf("the vertor x is %d any y is %d\n",v1.x,v1.y);

     v2.x=3;
    v2.y=6;
    printf("the vertor x is %d any y is %d\n",v2.x,v2.y);
    return 0;
}
