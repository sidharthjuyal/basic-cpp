#include <iostream>
using namespace std;
int main()
{
   system("cls");
   int n;
   cout << "Enter n: ";
   cin >> n;
   int i = 1;
   int e = n;
   while (i <= n)
   {
      int k = e - i;

      int j = 1;
      while (j <= n-1)
      {
         if (k > 0)
         {
            cout << " ";
            k--;
         }
          j++;
       }
       int g = 1;
            for (int h = n - i; h < n; h++, g++)
            {
               cout << g;
            }
      if(i>1){
       int g=i-1;
       for(int h=n-i;h<n-1; h++, g--){
          cout<<g;
       } 
       }
      cout << endl;
      i++;
   }
   return 0;
}