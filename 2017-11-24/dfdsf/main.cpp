#include <iostream>
using namespace std;
int main()
{
   if (1==2)
  {
    cout << "1" << endl;
  }
  else if (2==3)
  {
    cout << "2" << endl;
  }
  else
  {
   cout << "3" << endl; 
  }
  
  if (1==2)
  {
    cout << "1" << endl;
  }
  else
  {
    if (2==3)
      cout << "2" << endl;
    else
      cout << "3" << endl;
  }
  
  
 return 0; 
}
