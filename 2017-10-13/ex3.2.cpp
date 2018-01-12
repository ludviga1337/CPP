#include <iostream>
using namespace std;
int main()
{
  cout << "hej, vad heter du? Peter : ";
  char namn[20];
  cin >> namn;
  cout << "ge ditt telefonnummer utan mellanslag: 0721-834512 ";
  char tel[15];
  cin >> tel;
  cout << "hej, " << namn << ". Ditt telefonnummer är " << tel;
  return 0
}
