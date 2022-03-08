#include <iostream>
#include <fstream>
using namespace std;
int main () 
{
  ofstream obj1;
  obj1.open ("test.txt", ios::out);
  obj1<<"Hello world";
  int pos;
  pos=obj1.tellp();
  cout<<pos;
  obj1.close();

}