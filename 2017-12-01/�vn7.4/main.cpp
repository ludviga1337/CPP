#include <iostream>
using namespace std;
int main()
{
  double alder;
  cout << "Ange din �lder:";
  cin >> alder;
  if (alder < 15 || alder > 65)
  {
    cout << "Det kostar 5 kr" << endl;
  }
  else
  {
    cout << "Det kostar 10 kr" << endl;
  }
  
  return 0;
}

