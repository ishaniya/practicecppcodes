#include<iostream>
using namespace std;

int main()
{
	int n,t1=0,t2=1,next;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<t1;
		cout<<endl;
		for(int j=1;j<=i+1;j++)
		{	
			cout<<t2;
			cout<<'\t';
		}
		next=t1+t2;
		t1=t2;
       	t2=next;
	}
	
}
