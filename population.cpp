#include <iostream>
using namespace std;

int main()
{
   int population, monthly_birth_rate,after_three_decades;
   cout << "Enter the current world population: ";
   cin >> population;
   cout << "Enter monthly birth rate (number of births per month):";
   cin >> monthly_birth_rate;
   after_three_decades = population + monthly_birth_rate*360;
   cout << "The population in three decades will be " << after_three_decades; 
   return 0;
}