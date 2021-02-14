#include <iostream>
#include <string>
using namespace std;


//Print an array to terminal using loops.

void Print() // create a function and create a variable with flower array
{

string flowers[]{"Daises","Gardenias", "Lilie","Orchids","Roses","Sunflowers","Tulips", "Dahlias","Peonies"};
const int flowerNum={sizeof(flowers)/sizeof(flowers[0])};// get size of array uisng sizeof


for    (int i=0;    i < flowerNum;   i ++) // use  a for loop to list flowers to console
{
 
  cout<<flowers[i]<<"\n";

}



}
 int  main ()
{
    Print();

 cout<<"\n";
    return 0;
}

 
