#include <iostream>
using namespace std;

int main()
{
   int hrs,sec;
   cout << "Enter the number of hours: ";
   cin >> hrs;
   sec = hrs*60*60;
   cout << hrs << " hours is equal to " << sec << " seconds";
   return 0;
}