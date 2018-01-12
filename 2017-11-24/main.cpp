#include <iostream>
using namespace std;
int main()
{
  if ( (2<=1) && (1<=1) )
           //Måste entydigt
           //Kunna utvärderas
           //True/false
  {
    cout << "Sats 1 (sant)" << endl;
    cout << "Sats 2 (sant)" << endl;
  }
  else
  {
    cout << "Sats 1 (falskt)" << endl;
  }
  return 0;
}