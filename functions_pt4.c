#include <stdio.h>

int getValue(int paramA, float paramB);
int getExclusive(int paramA, int paramB);

int main(void)
{
	int thirtyFiveValue = getValue(4, 2.4);
	int thirtyValue1 = getValue(4, 2.6);
	int thirtyValue2 = getValue(6, 2.4);
	int twentyValue = getValue(6, 2.6);
	int twoValue = getExclusive(2, 1);
	int zeroValue = getExclusive(2, 2);

	printf("Thirty five: %d\n", thirtyFiveValue);
	printf("Thirty: %d\n", thirtyValue1);
	printf("Thirty: %d\n", thirtyValue2);
	printf("Twenty: %d\n", twentyValue);
	printf("Two: %d\n", twoValue);
	printf("Zero: %d\n", zeroValue);
	return 0;
}
/* your code */

int getValue(int paramA, float paramB){
    int result;
    if(paramA >= 5 && paramB >= 2.5){
        result = 25;    
    }else if(paramA >=5 && paramB < 2.5){
        result = 30;
    }else if( paramA < 5 && paramB >= 2.5 ){
        result = 30;
    }else if(paramA < 5 && paramB < 2.5){
        result = 35;   
    }
    return result;
}

int getExclusive(int paramA, int paramB){
    if(paramA == 2 && paramB != 2 || paramA != 2 && paramB == 2){
        return 2;
    }else{
        return 0;
    }    
}