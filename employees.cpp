#include <iostream>
#include <string>
using namespace std;


/*
create a struct and enter  employee details in the data types.
Then create a function which will output the different employee details.
*/

struct Employees
{ 
    string name;
    string surname;
    int EmployeeNumber;
    string Department;

};

// function to output employee details. Two parameters parsed in the function,
// one being the struct and another parameter "employee"

void PrintDetails(Employees employee)

{

cout<<"Employee Number:\n"<<employee.EmployeeNumber<<":\n"<<employee.name<<"\n"<<employee.surname<<"\n"
<<"works in the \n"<<employee.Department<<"\n""Department"<<endl;
}
   

   int main()
   {


/* Enter details of employees using an initialiser list,
    which is quicker than One.name="George" etc.
 
*/
 Employees One {"George","Rodgers", 1254325, "IT" };
 Employees Two {"Matthew", "Clarke", 2354268,"HR"};
 Employees Three {"Sarah","Medows", 6521538, "Development" };
 Employees Four {"Anita", "Singh", 5678456,"Marketing"};
 Employees Five {"Patrick","Smith", 5236863, "HR" };
 Employees Six {"Samantha", "Xi", 3046576,"Development"};
 Employees Seven {"Bruce","Vegas", 5476378, "Marketing" };
 Employees Eight {"Riona", "Abiah", 7953134,"IT"};


 PrintDetails (One);

cout<<"\n";

PrintDetails(Two);

cout<< "\n";

PrintDetails(Three);
cout<< "\n";

PrintDetails(Four);
cout<< "\n";

PrintDetails (Five);
cout<< "\n";

PrintDetails (Six);
cout<< "\n";

PrintDetails (Seven);
cout<< "\n";

PrintDetails (Eight);
cout<<endl;

       return 0;
   }