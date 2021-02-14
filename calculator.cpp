#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// using the switch loop
int main()
{
// creating variables to store operators and numbers.

char op{};
int num1, num2=0;

cout<< "Enter two numbers and any  of this operators \n"<<"+,-,*,/"<<endl;

cin>>num1;
cin>>op;
cin>>num2;

switch ( op) {

case '+':
cout << num1+num2;
break;
case '-':
cout << num1-num2;
break;
case '*':
cout << num1*num2;
break;
case '/':
cout << num1/num2;
break;

// defualt means stop if there is an error with user input

default:
cout<<"Error with operator! \n"<<"Please try again";
break;



}


return 0;

}
