#include <iostream>
using namespace std;
int main()
{
  double bensin;
  cout << "Hur mycket br�nsle finns det i tanken?" << endl;
  cin >> bensin;
  if (bensin < 10)
  {
    cout << "Du b�r tanka. Du kan fylla p� " << endl;
    cout << 50 - bensin << " liter. Det kostar " << endl;
    cout << ((50 - bensin) * 9.5) << " kronor." << endl;
  }
  else 
  {
   cout << "K�r vidare.";
  }
  
  return 0;
}
