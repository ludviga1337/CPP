#include <iostream>
using namespace std;
int main()
{
 double behallningen = 1000;
 double insattning, uttag;
 char val;
 
 cout << "MENY" << endl;
 cout << "1. Insättning" << endl;
 cout << "2. Uttag" << endl;
 cout << "3. Visa behållning" << endl;
 cin >> val;
 switch (val)
 {
   case '1':
   cout << "Ange värdet av din insättning: ";
   cin >> insattning;
   behallningen += insattning;
   break;
   
   case '2':
   cout << "Ange värdet av ditt uttag: ";
   cin >> uttag;
   if (uttag > behallningen);
   {
     cout << "För stort uttag!!!" << endl;
     uttag = 0;
   }
   behallningen -= uttag;
   break;
   case '3':
    break;
    DEFAULT:
   cout << "felinmatning\n";
 }
 cout << "Du har" << behallningen << " på kontot" << endl;
 
  
  
  
  return 0;
}
