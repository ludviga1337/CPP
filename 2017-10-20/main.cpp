#include <iostream>
#include <string>
using namespace std;
int main()
{
  string in;
  cin >> in;
  cin.ignore(1000,'\n');
  //klipper av utmatningen
  //vid mellanslag
  cout << in << endl;
  //klipper av vid nyradstecken
  getline(cin, in);
  cout << in << endl;
  
  
  
  
  cin.ignore(1000,'\n');
  /*
  string s = "Observera";
  int hitta = s.find("se",0);
  cout << hitta << endl;
  string delstring = s.substr(2,7);
  cout << delstring << endl;*/
  
  
  
  
  //int i;
  //float f;
  //char s;
  //primitiva datatyper
  /*string strang = "lektionssal";
  cout << strang << endl;
  strang = "kul";
  cout << strang << endl;
  int langd = strang.size();
  cout << langd << endl;
  int hitta = strang.find('u',1);
  cout << hitta << endl;*/
  
  
  return 0;
}
