#include<iostream>

// To shorten std::, "using namespace std" may be used

using namespace std;

// define main function

int main()
{
// create two variables

int x=0;
int y=0;

//prompt user to enter  a number

cout<<"Enter an integer:"<<endl;

cin>>x;

// multiple that number by two
// create another variable to store the answer
y=x*2;

// output reads double that number is...

cout<<"Double the number is:\n" <<y;

    return 0;
}