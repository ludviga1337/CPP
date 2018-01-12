#include <iostream>
using namespace std;

int main()
{
 int vikt[3];
cout << "2, 10, 19: ";
cin >> vikt[0] >> vikt[1] >> vikt [2];
int temp = vikt[0];
vikt[0] = vikt[2];
vikt[2] = temp;
cout << "fältets innehåll: " << vikt[0] << ' ' << vikt[1] << ' ' << vikt[2] << endl; 
  
  
  
 return 0;
}
