#include <iostream>
using namespace std;
int main(){
    string fname, lname;
    cout << "Enter First Name" << endl;
    cin >> fname;
    cout << "Enter Last Name" << endl;
    cin >> lname;
    cout << fname << " " << lname <<endl;
    return 0;
}


#include <iostream>
using namespace std;

int oddOrEven(int num){

    if(num > 0){
        cout << "You entered a positive number";
    }else if (num < 0){
        cout << "You entered a negative number";
    }else if(num == 0 ){
        cout << "You entered zero";
    }
    
    return 0;
}

int main() {
    char op;
    int num1, num2;
    cout << "Enter First Number" << endl;
    cin >> num1;
    cout << "Enter Operator" << endl;
    cin >> op;
    cout << "Enter Second Number" << endl;
    cin >> num2;

    switch (op){
        case '+':
        cout << num1<< "+" << num2 << "=" << num1 + num2;
        break;
        case '-':
        cout << num1 << "-"<< num2 << "=" << num1 - num2;
        break;
        case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
        case '/':
        cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
        default:{
        cout << "Invalid operator";
    }
    }
    
   
}

int main(){
    int num;
    cin >> num;
    oddOrEven(num);
    return 0;
}


int main(){
    int num;
    int factorial;
    cin >> num;
    for(int i = num-1; i < 0; i--){
         factorial = num * i;
    }
    cout << factorial;
    return 0;

}

