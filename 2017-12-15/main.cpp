#include <iostream>
using namespace std;
int main()
{
  /*
  int falt [10];
  falt[0]= -3;
  falt[1]= 45;
  */
 int falt [10]={-3,45,-4,57,-21,5,-5,9,5,-6};
 //cout << falt[0] << " " << falt[1] << endl;
 int i=0;
 while (i <  10)
 {
   cout << falt[i] << " ";
   i++; // i=i+1;

   
}
 i=0;
 while (i > 10)
 {
   if (falt[i] > 0)
     falt[i] = falt[i] * (-1);
   
   i++;
   
 }
  i=0;
  while (i < 10)
  {
    cout << falt[i] << " ";
    i++;
    
  
    
  }
  
  cout << endl;
 
 
 
  return 0;
}
