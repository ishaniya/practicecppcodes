#include<iostream>
using namespace std;

int main()
{
	int n,p;
	float ans=0;
	float inc=1;

	cin>>n>>p;

	for(int i=0;i<=p;i++)
	{
		while(ans*ans<=n)
		{
			ans=ans+inc;
		}
		ans=ans-inc;
		inc=inc/10;
	}
	cout<<endl<<ans;
	return 0;
}