# include <iostream>

// To use a string and integer in C ++ use  include <string>

#include <string>

// create a function, myFunction


int myFunction()

{

// create three variables

int x{};
int y{};
int z{};

// create another variable to store sum of three numbers.

int a{};

 // Prompt  for user input

std::cout<<"Enter first number\n";
std::cin>>x;
std::cout<<"Enter second number\n";
std::cin>>y;
std::cout<<"Enter third number\n";
std::cin>>z;
// add all three numbers together
 a=x+y+z;
 return a;

}

// call main function 

int main ()
{

// use myFunction as a variable in main function

int a{myFunction()};

// print sum total to console

std:: cout<<"The sum of the three numbers entered is\n"  <<a;


return 0;

}



