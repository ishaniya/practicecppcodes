#include<iostream>
using namespace std;

int zero(int n)
{
	int ans=0;
	for(int d=5;n/d>=1;d=d*5)
	{
		ans=ans+n/d;
	}
	return ans;
}

int main()
{
	long long int n;
	cin>>n;
	cout<<zero(n);
	return 0;
}
