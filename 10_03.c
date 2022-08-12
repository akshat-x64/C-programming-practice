#include <stdio.h>
#include <string.h>
struct vector
{
    int x;
    int y;
};
struct vector add(struct vector v1,struct vector v2){
    struct vector v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    return v3;

}
int main(int argc, char const *argv[])
{
    struct vector v1, *v2;
    v2 = &v1;
    v2->x = 2;
    v2->y = 4;
    printf("the vertor x is %d any y is %d\n", v1.x, v1.y);

    
    
    return 0;
}
