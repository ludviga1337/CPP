#include <iostream>
using namespace std;
int main()
{
 char engelsktord[20];
 cout << "mata in ett engelskt ord: ";
 cin >> engelsktord;
 char svensktord[20];
 cout << "mata in svensk �vers�ttning: ";
 cin >> svensktord;
 cout << "det engelska ordet " << engelsktord << " betyder " << svensktord << " p� svenska" << endl;
 
  return 0;
}
