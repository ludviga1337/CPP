#include <iostream>
using namespace std;
int main()
{
  //while-sats, sidan 
  int counter = 0;
  int falt[10];
  while (counter < 10)
  {
    cout << counter << ' ';
    falt [counter] = counter;
    // "falt, plats med index counter (0-9) tilldelas v�rdet counter (0-9)
    counter++;
    // counter=counter+1;
  }
   cout << "\nUtskrift sker" << endl;
   counter=0;
   while (counter < 10)
  {
    cout << falt[counter]<< ' ';
    falt [counter] = counter;
    // "falt, plats med index counter (0-9) skrivs ut v�rdet counter (0-9)
    counter++;
    // counter=counter+1;
  }
  
  
  return 0;
}
