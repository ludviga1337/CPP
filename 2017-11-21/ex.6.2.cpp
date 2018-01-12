#include <iostream>
using namespace std;
int main()
{
  float tal1, tal2;
  cout << "ange tal 1: ";// Läs in två tal, tal1 och tal2
  cin >> tal1;
  cout << "ange tal 2: ";
  cin >> tal2;
  //om tal1 är större än tal2,
  //skriv ut tal1 
  //annars 
  // skriv ut tal 2
  if (tal1 > tal2) // Pseudokad rad 11 och 12
  {
   cout << tal1 << endl;
  }
  else // Pseudoakd rad 13 och 14
  {
    cout << tal2 << endl;
  }
  return 0;
}
