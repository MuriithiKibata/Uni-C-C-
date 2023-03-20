#include <stdio.h>

void hello()
{
	puts("Hello!");
}
void another()
{
	puts("It's me - another function.");
}

int main(void)
{
    for(int i = 0; i < 3; i++){
        hello();
    }
    another();
    hello();
    another();
	/* your code */
	return 0;
}