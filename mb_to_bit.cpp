#include <iostream>
using namespace std;

int main()
{
   double mb,bit;
   cout << "Enter size in mega bytes (MB): ";
   cin >> mb;
   bit = mb*1024*1024*8;
   cout << mb << " mega bytes are equal to " << bit << " bits."; 
   return 0;
}