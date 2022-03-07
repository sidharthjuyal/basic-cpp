#include<iostream>
using namespace std;

class Account{
private:
int balance;    //instance member variable
static float roi;   //static member variable/calss variable

public:
void setBalance(int b)
{
    balance=b;
}
static  void setRoi(float r)
{
    roi=r;
}
};


float Account::roi=3.54;  //if not initialized, automatically 0 is assigned

int main()
{
   Account a1,a2;
//    Account::roi=4.5;    
//can only be done if roi was public
        Account::setRoi(4.56);
//this is how we access static member using static member functions so that static member can be initialized only one time.
}

/*
STATIC MEMBER VARIABLE/ (class variable)

-> declared inside the class body.
-> defined outside class body.
-> do not belong to a particular object but to a whole class.
-> only one copy of static member variable for the whole class.
-> any object can use the same copy of class variable.
-> they can only be used with class name.


STATIC MEMBER FUNCTIONS
-> function made by static keyword
-> can be invoked with or without object using membership label(class name with scope resolution operator [Account::])
-> can only access static memeber of class.

*/