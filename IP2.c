#include <stdio.h>

int main()
{
   unsigned short int num1, num2, num3, num4;
    scanf("%hu", &num1);
    scanf("%hu", &num2);
    scanf("%hu", &num3);
    scanf("%hu", &num4);
    printf("%hu.%hu.%hu.%hu", num1, num2, num3, num4);
	return 0;
}