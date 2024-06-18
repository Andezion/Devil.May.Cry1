#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    int y;
    int z;

    printf("Podaj date: ");
    scanf("%d-%d-%d",&x,&y,&z);
    printf("Day:%6s%02d\nMonth:%4s%02d\nYear:%3s%04d", "",x, "",y, "",z);
    return 0;
}
