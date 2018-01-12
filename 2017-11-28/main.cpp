//switch-case, sidan 90
#include <iostream>
using namespace std;
int main()
{
  int tal = 1;
  switch (tal) // heltal (char , int)
  {
    case 1:
    cout << "Tal är 1" << endl;
    break;
     case 2:
    cout << "Tal är 2" << endl;
    break;
     case 3:
    cout << "Tal är 3" << endl;
    break;
     default:
       cout << "Tal är något annat" << endl;
       
   
  }
  
  
  /*int tal = 3;
if (tal==1)
{
  cout << "tal är 1" << endl;
}
  else if (tal==2)
  {
  cout << "tal är 2" << endl;
  {
    else if (tal==3)
    }
    cout << "tal är 3" << endl;
    }
      else 
      {
      cout << "tal är något annat" << endl;
      }*/
  
  
  return 0;
}
