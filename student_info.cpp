#include <iostream>
using namespace std;

int main()
{
   string name;
   int roll_no;
   double aggregate;
   char section;
   cout << "Enter your name: ";
   getline(cin,name);
   cout << "Enter your roll no: ";
   cin >> roll_no;
   cout << "Enter your aggregate: ";
   cin >> aggregate;
   cout << "Enter your section: ";
   cin >> section;
   cout << endl << "Student's Information:" << endl;
   cout << "Name: " << name << endl;
   cout << "Roll No. " << roll_no << endl;
   cout << "Aggregate: " << aggregate << endl;
   cout << "Section: " << section;
   return 0;
}
   