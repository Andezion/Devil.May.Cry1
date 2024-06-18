#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("Podaj liczby: ");
    scanf("%03d%03d%03d",&x,&y,&z);
    printf("%03d\n%03d\n%03d",x,y,z);
    return 0;
}
