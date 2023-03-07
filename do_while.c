#include <stdio.h>
#include <string.h>
int main(void){

char str1[50] = "*#";
int num;
int counter = 0;
int counter2 = 0;
scanf("%d", &num);
do {
    
    ++counter;
    counter2 = 0;
    printf("\n");
    do {
        printf("%s", str1);
       counter2++;
       
    }
    while (counter2 < counter); 
    if(counter == 20){
        break;
    }
    
}
while(counter < num);
    


    return 0;
}