#include <iostream>
using namespace std;
int main()
{
 double behallningen = 1000;
 double insattning, uttag;
 char val;
 
 cout << "MENY" << endl;
 cout << "1. Ins�ttning" << endl;
 cout << "2. Uttag" << endl;
 cout << "3. Visa beh�llning" << endl;
 cin >> val;
 switch (val)
 {
   case '1':
   cout << "Ange v�rdet av din ins�ttning: ";
   cin >> insattning;
   behallningen += insattning;
   break;
   
   case '2':
   cout << "Ange v�rdet av ditt uttag: ";
   cin >> uttag;
   if (uttag > behallningen);
   {
     cout << "F�r stort uttag!!!" << endl;
     uttag = 0;
   }
   behallningen -= uttag;
   break;
   case '3':
    break;
    DEFAULT:
   cout << "felinmatning\n";
 }
 cout << "Du har" << behallningen << " p� kontot" << endl;
 
  
  
  
  return 0;
}
