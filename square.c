#include <stdio.h>

float square(float num);
/* your code */

int main()
{
    float num = 2;
    square(num);
	/* your code */
	
	return 0;
}
/* your code */

float square(float num){
 float result = num * num;
printf("%.2f", result);
return result;
}