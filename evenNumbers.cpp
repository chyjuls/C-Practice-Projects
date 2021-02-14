#include <iostream>
#include <string>
using namespace std;



/*   multiply each even number by 3.
     create a function.
     create a variable i.
     */


void evenNumbers()

{

int  i{};
// create a variable y and assign the number 3.

int y={3};

for (int i =0; i<=30; i++)
if (i%2==0) //modular for even numbers.


    
{ // return i multiplied by 3.

    cout<<""<<i*y<<endl;
}



}
 
 int main()

 
{
    evenNumbers();

    
    return 0;

}
   