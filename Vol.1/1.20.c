#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float kut1;
    float kut2;
    printf("Podaj pierwsza przyprostokatna: ");
    scanf("%f", &a);
    printf("Podaj druga przyprostokatna: ");
    scanf("%f", &b);

    c = sqrt(a * a + b * b);
    printf("Twoja przeciwprostokatna: %.2f\n", c);

    kut1 = asin((a/c)) * 180 / 3.14159265359;
    kut2 = asin((b/c)) * 180 / 3.14159265359;

    printf("%.2f\n", kut1);
    printf("%.2f", kut2);
    return 0;
}
