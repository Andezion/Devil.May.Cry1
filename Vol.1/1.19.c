#include <stdio.h>
#include <math.h>
int main()
{
    float x;
    printf("podaj liczbe:");
    scanf("%f",&x);
    printf("wartosc funkcji y=%f",2*x*x*x - 4*x*x + 3*x - 7);
    return 0;
}
