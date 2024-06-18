#include <stdio.h>
int main()
{
    float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;

    printf("Podaj dziesiec liczb:");
    scanf("%f %f %f %f %f %f %f %f %f %f",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10);
    float y = (x1+x2+x3+x4+x5+x6+x7+x8+x9+x10)/10;
    printf("Srednia arytmetyczna= %.4f",y);
    return 0;
}
