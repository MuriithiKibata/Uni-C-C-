#include <stdio.h>
#include <string.h>
struct Person{
    char firstname[30];
    char lastname[30];
    
}; 

int main()
{
struct Person person1;
struct Person person2;
struct Person person3; 
struct Person person4;

strcpy(person1.firstname, "Mary");
strcpy(person1.lastname, "Smith");
strcpy(person2.firstname, "James");
strcpy(person2.lastname, "Johnson");
strcpy(person3.firstname, "Patricia");
strcpy(person3.lastname, "Williams");
strcpy(person4.firstname, "John");
strcpy(person4.lastname, "Brown");

printf("%s %s\n",  person1.firstname, person1.lastname);
printf("%s %s\n",  person2.firstname, person2.lastname);
printf("%s %s\n",  person3.firstname, person3.lastname);
printf("%s %s\n", person4.firstname, person4.lastname);
    
	return 0;
}