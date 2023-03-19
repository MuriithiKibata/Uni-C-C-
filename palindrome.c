#include <stdio.h>
#include <string.h>
#define MAX 40
int main()
{
    char pali[MAX];
    char reverse[30];
    // scanf("%s", pali);
    fgets(pali, MAX, stdin);
    printf("%s", pali);
    
    for(int i = strlen(pali) - 1; i > -1; i--){
        printf("%c", pali[i]);
    
    }
	return 0;
}