 
#include <iostream>
using namespace std;
int main()
{
  /*
   * datatyp variabelnamn;
   */
  int antal;
  antal = 4;  // plats för
              // en int
              // allokeras 
              // (bokas)
              
              // antal
              // tilldelas
              // värdet 4
  //inmatning från tangentbord 
  int tal1 ,tal2;
  cout << "mata in ett heltal 1: ";
  cin >> tal1;
  cout << "mata in heltal 2: ";
  cin >> tal2;
  int summa = tal1+tal2;
  /*
   * int summa;
   * summa = tal1+tal2;
   */
  cout << "Summan av talen blir " << summa << endl;
  cout << "summan av talen blir " << tal1+tal2 << endl;
  /*
   *  tal = tal+1;
   */
 
  return 0;
}