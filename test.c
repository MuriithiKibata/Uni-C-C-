#include <stdio.h>
#include <string.h>

int fun(int a){
    int b = 1;
    return a << b;
}


int main() {
//    int i = -1, j = 3;
//    for(j > 0; j; j--){
//     i *= 2;
//    }
 int  i = 2, j =1, k;
// scanf("%d", &x);
k = i >> j;
k <<= i;
printf("%d\n", k);
 
    // printf("%d\n",i + j);
}