 #include <iostream>
using namespace std;
int main()
{
  double hopp;
  double vind;
  cout << "Mata in l�ngd:";
  cin >> hopp;
  cout << "Mata in vindstyrka:";
  cin >> vind;
  if (hopp > 7.92 && vind <= 2.0)
  {
    cout << "Grattis!" << endl;
  }
 
  return 0;
}

