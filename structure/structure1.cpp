#include<iostream>
using namespace std;

struct sid{   //global declaration of a structure

int age;
string name;
string percentage;

void setData()
{
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter percentage: ";
    cin>>percentage;
}

void getData()
{
    cout<<"\n\nName: "<<name<<"\nAge: "<<age<<"\nPercentage: "<<percentage;
}


}c;   //global declaration of instance

int main()
{
struct sid a;    //in C it was compulsory to write struct keyword before making an instance of struct but in c++ it is optional. i.e. you can also write      sid a;    and this will create an instance of the corresponding struct class.
sid b;
a.setData();
a.getData();
}