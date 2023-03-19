#include <stdio.h>

int main()
{
    int date;
    scanf("%d", &date);
    if(date % 400 == 0 && date % 400 == 0){
        printf("%d is leap year.\n", date);
    }else{
        printf("%d is not a leap year\n", date);
    }

	return 0;
}