#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space, num, n = 0;
    num = 0;
    int i = 0;
    char alpha[28] = {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'A'};
    char *arr;
    scanf("%d", &space);
    if(space > (1024 * 1024)){
        puts("Too much memory requested");
    }
    arr = (char *) malloc(space * sizeof(char));
    if(arr == NULL){
        puts("Could not allocate memory");
    }
    while(i < space){
        if(n > 25){
            n = 0;
        }

        arr[num] = alpha[n];
        // if(space == sizeof(alpha))
        // break;
        n++;
        num++;
        i++;
        printf("%d\n", n);
    
    }

    for (int i = 0; i < space; i++){
        printf("%c", alpha[i]);
    }
    free(arr);
    printf("%d", n);
	/* your code */
	return 0;
}