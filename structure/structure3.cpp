#include<iostream>
using namespace std;

struct sid{   

private:  //use of access modifiers in c++ structure (not possible in C structure)
//this is data hiding and data security
//by default structure is public
int age;
string name;
string percentage;

public:
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

};

int main()
{   
sid b;
b.setData();
b.getData();
}