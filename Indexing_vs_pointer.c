#include <stdio.h>
#include <string.h>

int main()
{
	char *week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int i;
	scanf("%d", &i);
	if(0 < i && i < 7){
	printf("Pointer version: %s\n", week[i]);
	printf("Array index version: %s", *(week + i));
	}else{
	    puts("Error, no such day");
	}
	return 0;
}