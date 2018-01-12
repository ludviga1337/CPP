#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double kostnad = 9.9;
  double rabatten;
  int antal;
  cout << "Hur många CD-skivor får det lov att vara?" << endl;
  cin >> antal;
  if (antal < 10)
  {
    rabatten = 0;
  }
  else if (antal < 50)
  {
    rabatten = 5;
  }
  else if (antal < 100)
  {
    rabatten = 10;
  }
  else
  {
    rabatten = 15;
  }
  
  cout << "Kostanden för " << antal << " skivor blir ";
  cout << antal * kostnad * (1-rabatten/100) << endl;
  
  
  
  return 0;
}