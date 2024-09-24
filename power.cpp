#include <iostream>
using namespace std;

int main()
{
   double volt,current,power;
   cout << "Enter voltage (in volts): ";
   cin >> volt;
   cout << "Enter current (in amperes): ";
   cin >> current;
   power = volt*current;
   cout << "The power is " << power << " watts.";
   return 0;
}