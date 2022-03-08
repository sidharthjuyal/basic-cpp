#include <iostream>
#include <fstream>
using namespace std;
int main () 
{
  ifstream obj2;
  obj2.open("test.txt");
  char ch;
  int pos;

 while(!obj2.eof())
 {
   obj2>>ch;
   pos=obj2.tellg();
   cout<<pos<<"."<<ch<<endl; 
 }

  obj2.close();
}