#include<iostream>
#include <string>
using namespace std;

// define a function counterGame...


 void counterGame()
{
 //create a varable and store the  first number, 1 

  int  num{ 1 };
 
 // using while loop set the counter, num<=10( set to 10)

 while (num <=10)

 {

cout<<"\n""The number is""\n"<<num<<endl;

// use the if staement to create a condition where counter gets to 5.
 
if ( num==5)

{
cout<<"\n""We are half way through!\n";

}

// continue counting up to 10 using ++num

 ++ num;
 

}
 // return statement to say counter is done!

{
cout<<"\n"<<"This is the end of the program!\n";

}


}


// calling function counterGame() to main function.
 

int main ()
{
 
   counterGame();

   return 0;
 
}
     
 // code end! The for loop can also be used ...

 /* for (num=0; num<=10; num ++),
 cout<<""<<num<<endl;
 if (num==5)
 {
    cout<<"Half way there!"...

 }
 */


  



