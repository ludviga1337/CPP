#include <iostream>
using namespace std;
int main()
{
  char answer;
  cout << "Vill du testa en villkorssats? (j/n)" << endl;
  cin >> answer;
  if (answer == 'j')
  cout << "Du svarade ja, det verkar fungera!" << endl;
  else 
    cout << "Du svarade nej." << endl;
  
 return 0; 
}
