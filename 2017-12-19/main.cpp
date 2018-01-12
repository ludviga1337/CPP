#include <iostream>
using namespace std;
int main()
{
  char gender;
  cout << "Vilket kön tillhör du? (m/k)" << endl;
  cin >> gender;
  cout << "Du är en " << (gender != 'm' ? "kvinna." : "man.") << endl;
  
  
  return 0;
}
