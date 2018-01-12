#include <iostream>
using namespace std;
int main()
{
  char falt[]={'g','r','a','n','\0'};
  cout << falt[0] << falt[1] << falt [2] << falt [3] << endl;
  cout << falt << endl;
  
  //rad 11
  // Ett teckenfält med 8 platser skapas 
  //'J','u','l','g','r','a','n','\0'
  char nyfalt[] = "julgran";
  cout << nyfalt << endl; // stoppar när '\0' hittas 
 /* 
 double tid[]={9.98, 10.15, 10,04};
 cout << "fältet innehåller följande tider: " << endl;
 cout << tid[0] << "\t" << tid[1] << endl;
  
 double tmp;

 //algoritm för att byta plats på
 //två värden i ett fält
 tmp = tid[0];
 tid[0] = tid[1];
 tid[1] = tmp;

 cout << "fältet innehåller följande tider: " << endl;
 cout << tid[0] << "\t" << tid[1] << endl;
 */
  

  return 0;
}
