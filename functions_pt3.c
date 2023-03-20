#include <stdio.h>
//This program has a bug in it. For some reason the bubble sort keeps going into an infinite loop. It works sometimes but sometimes it doesn't work.
//Turns out that the issue is that c isn't handling the assignment of the function parameters to the array well. nkt
double getMaxOfThree(double paramA, double paramB, double paramC)
{
    int controller;
    double aux, result;
    
    double arr[3] = {paramA, paramB, paramC};
    do{
        controller = 0;
        for(int i = 0; i < 3; i++){
            if(arr[i] > arr[i + 1]){
                aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                controller = 1;
            }
        } 
    }
    while(controller);
    result = arr[2];
	return result;
}

int main(void)
{
	double tenValue = getMaxOfThree(5, 9, 10);
	double bigValue = getMaxOfThree(555.4, 555.3, 556.4);
	printf("Ten: %.2f\n", tenValue);
	printf("Bigest value: %.2f\n", bigValue);
	return 0;
}