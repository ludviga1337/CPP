#include <iostream>
using namespace std;
int main()
{
  int tal1, tal2, minsta;
  cout << "Mata in tv� heltal" << endl;
  cin >> tal1 >> tal2;
  minsta = tal1 < tal2 ? tal1 : tal2;
  cout << "Det minsta talet �r " << minsta << endl;
  
  
  return 0;
}
