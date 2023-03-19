#include <stdio.h>
 
int main()
{
     int x;
     scanf("%d", &x);
     int higher = (x  >> 4) & 0x0F;
     int lower = x & 0xF;
    
    printf("%d\n", higher);
    printf("%d", lower);
    return 0;
}