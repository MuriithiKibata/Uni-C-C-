#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    char str[] = "add";
  if(argc != 2){
    printf("Wrong parameters");
    return 1;
  }
    int  x = atoi(argv[2]);
    int y = atoi(argv[3]);
    int res = strcmp(argv[1], str);
    // printf("%d\n", x);
      if(strcmp(argv[1], "add") == 0){
        printf("%d\n", x + y);
      }else if(strcmp(argv[1], "mul") == 0){
         printf("%d\n", x * y);
      }else if(strcmp(argv[1], "sub") == 0){
        printf("%d\n", x - y);
      }
}
