#include <stdio.h>
#include <math.h>
 int func1(int num1){
        int result;
        if(0 <= num1 <= 256 ){
            result = 1;
        }else {
            result = 0;
        }
        return result;
    }
    int func2(int num1){
        int result;
        if(0 <= num1 <= 256 ){
            result = 1;
        }else {
            result = 0;
        }
        return result;
    }
    int func3(int num1){
        int result;
        if(0 <= num1 <= 256 ){
            result = 1;
        }else {
            result = 0;
        }
        return result;
    }
    
    int func4(int num1){
        int result;
        if(0 <= num1 <= 256 ){
            result = 1;
        }else {
            result = 0;
        }
        return result;
    }



int main(){
    int num1, num2, num3, num4;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    
   int res1 = func1(num1);
   int res2 = func2(num2);
   int res3 = func3(num3);
   int res4 = func4(num4);
   
   int base = 256;
   
   int ipp1 = pow(base ,3)  * num1;
   int ipp2 = pow(base ,2)  * num2;
   int ipp3 = pow(base ,1)  * num3;
   int ipp4 = pow(base ,0)  * num4;
   int total = ipp1 + ipp2 + ipp3 + ipp4;
    
    if(res1 == 1 && res2 == 1 && res3 == 1 && res4 == 1){
     printf("Human-readable IP address is: %d.%d.%d.%d\n", num1, num2, num3, num4);
     printf("IP address as a 32-bit number: %d", total);
    }else {
        printf("Incorrect IP Address.");
    }
    
    
	/* your code */
	return 0;
}



