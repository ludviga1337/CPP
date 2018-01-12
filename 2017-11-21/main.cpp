#include <iostream>
using namespace std;
int main ()
{
  //Ett val mellan två
  //alternativ, selektion 
  //i ett aktivitetsdiagram
  //något som är entydligt 
  //är sant eller falskt 
  cout << "Mata in ett heltal" << endl;
  int i ;
  cin >> i;
  if (i >= 10) //...om inte sant
  {
    cout << "Du matade in ett tal, större eller lika med 10" << endl;
  }
  else //... utförs detta istället
  {
    cout << "Du matade in ett tal, mindre än 10" << endl;
  }
  // ...programmet fortsätter här 
    
    return 0;
}
