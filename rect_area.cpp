#include <iostream>
using namespace std;

int main()
{
   double len,width,area;
   cout << "Enter length of rectangle: ";
   cin >> len;
   cout << "Enter width of rectangle: ";
   cin >> width;
   area = len * width;
   cout << "Area of rectangle = " << area;
   return 0;
}