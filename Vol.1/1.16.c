#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Podaj wartosci a:");
    scanf("%i",&a);
    printf("Podaj wartosci b:");
    scanf("%i",&b);
    printf("Podaj wartosci c:");
    scanf("%i",&c);
    float d = sqrt((a*a)+(b*b)+(c*c));
    printf("%.2f",d);
    return 0;
}
