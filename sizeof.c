#include <stdio.h>

int main()
{
	/* your code */
	printf("%d byte for chars\n", sizeof(char));
	printf("%d byte for char variable\n", sizeof(char));
    printf("%d bytes for shorts\n", sizeof(short int));
    printf("%d bytes for short variable\n", sizeof(short int));
    printf("%d bytes for ints\n", sizeof(int));
    printf("%d bytes for int variables\n", sizeof(int));
    printf("%d bytes for longs\n", sizeof(long int));
    printf("%d bytes for long variables\n", sizeof(long int));
    printf("%d bytes for long longs\n", sizeof(long long int));
    printf("%d bytes for long long variables\n", sizeof(long long int));
    printf("%d bytes for floats\n", sizeof(float));
    printf("%d bytes for float variables\n", sizeof(float));
    printf("%d bytes for doubles\n", sizeof(double));
    printf("%d bytes for double variables\n", sizeof(double));
    printf("%d bytes for pointers\n", sizeof(int *));
    printf("%d bytes for pointer variables\n", sizeof(int *));
    printf("%d bytes for address of char variables\n", sizeof(char &));
    printf("%d bytes for pointer to char variable\n", sizeof(char *));
    printf("%d bytes for value stored by pointer to char variable\n", sizeof(char &));
	return 0;
}