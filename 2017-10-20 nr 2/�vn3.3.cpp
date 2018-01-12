#include <iostream>
using namespace std;
int main()
{
 char engelsktord[20];
 cout << "mata in ett engelskt ord: ";
 cin >> engelsktord;
 char svensktord[20];
 cout << "mata in svensk översättning: ";
 cin >> svensktord;
 cout << "det engelska ordet " << engelsktord << " betyder " << svensktord << " på svenska" << endl;
 
  return 0;
}
