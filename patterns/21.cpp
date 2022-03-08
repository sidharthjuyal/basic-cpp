 #include<iostream>
using namespace std;
int main()
{
   system("cls");
    int i=1,n;
    cout<<"enter n: ";
    cin>>n;

    while(i<=n){
        int k=i-1;
        int j=1;
        while(j<=n){
            if(k>0){
                cout<<" ";
                k--;
            }else
            cout<<i;

            j++;
        }
        cout<<endl;
        i++;
    }
   return 0;
}