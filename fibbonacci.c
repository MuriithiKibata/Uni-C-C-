#include <stdio.h>

int main()

{
int i;
int fib[10];
fib[0] = 1;
fib[1] = 1;
fib[2] = 2;
fib[3] = 3;
fib[4] = 5;
fib[5] = 8;
fib[6] = 13;
fib[7] = 21;
fib[8] = 34;
fib[9] = 55;

for(i = 0; i < 10; i++){
    printf("%d\n", fib[i]);
}
for(i = 0; i < 10; i += 2){
    printf("%d\n", fib[i]);
}
for(i = 1; i < 10; i += 2){
    printf("%d\n", fib[i]);
}

	return 0;
}