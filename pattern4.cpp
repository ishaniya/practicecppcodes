#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
		for(k=0;k<n;k++)
		{
		for(j=1;j<=n-k;j++)
		{
			cout<<j;
		}
		for(i=0;i<k;i++)
		{
			cout<<"*";
		}
		cout<<endl;
		}
	return 0;
}
