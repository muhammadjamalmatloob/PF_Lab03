#include <iostream>
using namespace std;

int main()
{
   float kg,lb;
   cout << "Enter weight in pounds: ";
   cin >> lb;
   kg = lb*0.45;
   cout << lb << " pounds are equal to " << kg << " kilograms";
   return 0;
}
