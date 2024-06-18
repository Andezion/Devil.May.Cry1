#include <stdio.h>

int main()
{
    float x;
    int y;
    printf("Wprowadz liczbe: ");
    scanf("%f",&x);
    printf("Wprowadz dokladnosc: ");
    scanf("%i",&y);
    printf("%.*f",y,x);
    return 0;
}
