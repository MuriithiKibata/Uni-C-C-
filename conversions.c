#include <stdio.h>


int main()
{   float num1;
    scanf("%f", &num1);
    int num = num1;
    if(1 <= num && num < 2){
        puts("Very bad");
    }else if(2 <= num && num < 3){
        puts("Bad");
    }else if(3 <= num && num < 4){
        puts("Neutral");
    }else if(4 <= num && num < 5){
        puts("Good");
    }else if( 5 <= num && num < 6){
        puts("Very Good");
    }
  

	return 0;
}