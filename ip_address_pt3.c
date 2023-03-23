#include <stdio.h>
#include <string.h>

/* your code */
int is_ip_valid(char *ip[50]);

int main()
{
	/* your code */
    char *ip[50] = { "127.0.0.1",};
	is_ip_valid(ip);
	
	
	return 0;
}
/* your code */
int is_ip_valid(char *ip[50]){
    char *parts = strtok(ip, ".");
    while(parts){
    printf("%s\n", parts);  
    parts = strtok(NULL, ".");
    }
    
    return 0;
}