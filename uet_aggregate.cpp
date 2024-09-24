#include <iostream>
using namespace std;

int main()
{
   string name;
   double matric,inter,ecat,aggregate;
   cout << "Enter student's name: ";
   getline(cin,name);
   cout << "Enter student's matric marks (out of 1100): ";
   cin >> matric;
   cout << "Enter student's inter marks (out of 550): ";
   cin >> inter; 
   cout << "Enter student's ecat marks (out of 400): ";
   cin >> ecat;
   aggregate = matric/1100*10 + inter/550*40 + ecat/400*50;
   cout << "Aggregate score for " << name << " in UET is: " << aggregate << "%";
   return 0;
}