#include <stdio.h>
int main(){
int num1, num2, sum;
do {
    scanf("%d", &num1);
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum is: %d\n", sum);
   
}
    while(num1 != 0 && num2 != 0);
     printf("Finish");
    
	return 0;
}