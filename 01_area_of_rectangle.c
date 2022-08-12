// calculate area of triangle
//#include <stdio.h>
int main(int argc, char const *argv[])
{
    int len, bth, area;
    printf("Enter the value of len\n");
    scanf("%d", &len);

    printf("Enter the value of bth\n");
    scanf("%d", &bth);

    area = len * bth;
    printf("area of rectangle = %d", area);
    return 0;
}
