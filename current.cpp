#include <iostream>
using namespace std;

int main()
{
   double q,t,i;
   cout << "Enter Charge (Q) in Coulombs: ";
   cin >> q;
   cout << "Enter Time (T) in seconds: ";
   cin >> t;
   i = q/t;
   cout << "The Current (I) is " << i << " Amperes.";
   return 0;
}