#include <stdio.h>

int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	/* your code */
	int swapped, aux;
	do {
	    swapped = 0;
	    for(int i = 0; i < 9; i++){
	        if(numbers[i] > numbers[i + 1]){
	            aux = numbers[i];
	            numbers[i] = numbers[i + 1];
	            numbers[i + 1] = aux;
                swapped = 1;
	        }
	    }
	    
	    for(int i = 0; i < 9; i++){
	        printf("%.2f ", numbers[i]);
	    }
	    
	}
	while(swapped);
	return 0;
}

