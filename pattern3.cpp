#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
			for(int p=1;p<=i;p++)
			{
				cout<<p;
			}
		for(j=1;j<=i;j++)
		{
		
		}
		for(k=n-j;k>=0;k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
