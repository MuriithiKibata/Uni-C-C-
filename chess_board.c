#include <stdio.h>

int main()
{
    
    char chess[2][8] = {{'P','N', 'B', 'Q', 'K', 'B', 'N', 'R'}, {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 8; j++){
            printf("%c", chess[i][j]);
        }
         printf("\n");
    }
    
    for(int s = 4; s > 0; s--){
        printf("\n");
    }
    
    for(int i = 1; i > -1; i--){
        for(int j = 0; j < 8; j++){
            printf("%c", chess[i][j]);
        }
    }
}