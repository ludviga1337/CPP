#include <iostream>
using namespace std;
int main()
{
  int min, max, steg;
  cout << "Min: "; cin >> min;
  cout << "Max: "; cin >> max;
  cout << "Steg: "; cin >> steg;
  
  for ( int n= max ; n > min ; n = n - steg)
  {
    cout << n << ' ' << endl;
  }
  
  
  return 0;
} 
