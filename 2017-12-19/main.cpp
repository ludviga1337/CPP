#include <iostream>
using namespace std;
int main()
{
  char gender;
  cout << "Vilket k�n tillh�r du? (m/k)" << endl;
  cin >> gender;
  cout << "Du �r en " << (gender != 'm' ? "kvinna." : "man.") << endl;
  
  
  return 0;
}
