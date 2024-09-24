#include <iostream>
using namespace std;

int main()
{
   int year,days;
   cout << "Enter your age in years: ";
   cin >> year;
   days = year*365;
   cout << "Your age in days is approximately " << days << " days.";
   return 0;
}