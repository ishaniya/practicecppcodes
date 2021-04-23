#include<iostream>
using namespace std;

void pattern(int n)
{
	for(int i=1;i<=n;i++)
	{
		int cnt=n-i+1;
		char al='A';
		for(int j=1;j<=cnt;j++)
		{
			cout<<al;
			al=al+1;
		}
		cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	pattern(n);
	return 0;
}
