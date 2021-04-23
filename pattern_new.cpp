#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n<=1000)
	{	
		for(int i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
				for(int j=1;j<=i;j++)
				{
					cout<<"1";
				}
				cout<<endl;
			}
			else
			{
				cout<<"1";
				for(int l=1;l<=i-2;l++)
				{
					cout<<"0";
				}
				cout<<"1"<<endl;
				
			}
			
			
		} 
	}
	
	return 0;
}
