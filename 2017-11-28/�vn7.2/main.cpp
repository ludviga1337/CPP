#include <iostream>
using namespace std;
int main()
{
  double bensin;
  cout << "Hur mycket bränsle finns det i tanken?" << endl;
  cin >> bensin;
  if (bensin < 10)
  {
    cout << "Du bör tanka. Du kan fylla på " << endl;
    cout << 50 - bensin << " liter. Det kostar " << endl;
    cout << ((50 - bensin) * 9.5) << " kronor." << endl;
  }
  else 
  {
   cout << "Kör vidare.";
  }
  
  return 0;
}
