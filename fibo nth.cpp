#include<iostream>
using namespace std;

int fibo(int n)
{
	int a=0;
	int b=1;
	int c=0;
	for(int i=0;i<=n-1;i++)
	{
		a=b;
		b=c;
		c=a+b;
	}
	return c;
}

int main()
{
	int n;
	cin>>n;
	cout<<fibo(n);
	return 0;
}
