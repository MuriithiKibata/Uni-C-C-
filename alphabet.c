#include <stdio.h>

int main()
{
    char letter1;
    char letter2;
    char letter3;
    char letter4;
    char letter5;
     
    
   int alpha[200];
   for(int i = 97; i < 123; i++){
    alpha[i] = i;
    // printf("%c", alpha[i]);
           if(alpha[i] == 116){
           letter5 = alpha[i];
       }
        if(alpha[i] == 114){
           letter2 = alpha[i];
       }
        if(alpha[i] == 103){
           letter1 = alpha[i];
       }
        if(alpha[i] == 101){
           letter3 = alpha[i];
       }
        if(alpha[i] == 97 ){
           letter4 = alpha[i];
       }
       
   }
   
   for(int i = 122; i > 97; i--){
       printf("%c\n", alpha[i]);

       
   }
    printf("%c%c%c%c%c", letter1, letter2, letter3, letter4, letter5);
	/* your code */
 	return 0;
}