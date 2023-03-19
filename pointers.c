#include <stdio.h>

int main()
{
	int i, num;
	num = 1;
	float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
	float biggerNumbers[10];
	float *source = numbers;
	float *copy = numbers;
	//Don't assign like this *copy = *source; because by default the pointer value is the first element in the array.
	copy = source;
	copy = copy + 5;
	
	for (i = 4; i > 0; i--)
	{
// 		*copy = *source;
        
		printf("%.1f\n", source[i]);
		for(int k = 0; k < num; k++){
		    printf("%.1f\n", copy[i]);
		}
    num++;
	}
// 	float *biggerEnd = copy;
// 	float *biggerStart = biggerNumbers;
// 	float *middle1 = biggerNumbers + 5;
// 	float *middle2 = middle1 + 5;
// 	for ( int i = 0; middle1 < biggerStart; i++)
// 	{
// 		printf("%.1f\n", middle1[i]);
// 		printf("%.1f\n", middle2[i]);
// 	}
	return 0;
}