#include<iostream>
using namespace std;

int main()
{
    system("cls");
	int n;
	cout<<"Enter the size of the array :";
	cin>>n;                                 
	int a[n][n];
	int l=n,k=1,j=0,i;            

	while(k<=n*n)                      
	{
		for(i=j;i<l;i++)         
		{
			a[j][i]=k++;
		}

		for(i=j+1;i<l;i++)       
		{
			a[i][l-1]=k++;
		}

		for(i=l-2;i>=j;i--)      
		{
			a[l-1][i]=k++;
		}

		for(i=l-2;i>j;i--)      
		{
			a[i][j]=k++;
		}

		j++,l=l-1;
		
	}

	for(i=0;i<n;i++)             
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}