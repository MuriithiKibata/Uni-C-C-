#include <iostream>
using namespace std;
enum Nums  {one, two, three};

struct Person{
    int age: 10;
    char name[20];
    int salary: 1;

};

int main(){
    Person person;

cout << "Your salary is: " << person.salary << endl;
cin.get(person.name, 20);
cout << "Your name is: " << person.name << endl;
cout << "Your age is: " << person.age << endl;

/*Nums num1 = one;

 cout << num1 << endl;*/


}