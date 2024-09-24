#include <iostream>
using namespace std;

int main()
{
   int win,lose,draw,points;
   string team;
   cout << "Enter the name of the cricket team: ";
   getline(cin,team);
   cout << "Enter the number of wins: ";
   cin >> win;
   cout << "Enter the number of draws: ";
   cin >> draw;
   cout << "Enter the number of loses: ";
   cin >> lose;
   points = win*3 + draw;
   cout << team << " has obtained " << points << " points in the Asia Cup tournament";
   return 0;
}