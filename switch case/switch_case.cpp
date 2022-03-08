#include<iostream>
using namespace std;
int main(){
        system("cls");
    char num ='1';
    while(1){
    switch(num){
        case 1: cout<<"first";
                break;
        case 2: cout<<"second";
                break;
        case '1':cout<<"character 1";
                exit(0);
        default: cout<<"default";    //not mandatory
                break;
    }}
}

//you can also make nested switches