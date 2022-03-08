#include<iostream>
#include<cstring>
using namespace std;

struct book{

int bookid;
string title;
float price;

void getData()
{
    cout<<"\n\nBook ID: "<<bookid<<"\nBook title: "<<title<<"\nBook Price: "<<price;
}
}b2;

int main()
{
book b1={69,"c++ by sid",420.0};  //how to initialize at declaration

b2.bookid=420;              //or u can do this
b2.title="C++ by siddhu";
b2.price=69.0;

book b3;
b3=b2;   //copy one instance into a other

b1.getData();
b3.getData();
}