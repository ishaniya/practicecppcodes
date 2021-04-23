#include<iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	if(n<=1000)
	{
		for(int i=1;i<=n;i++)
		{
			if(i==1)
			{
				
				for(int l=1;l<i-1;l++)
			{
				cout<<"0";
				
			}
			cout<<i<<endl;
			}
			else{
			
			cout<<i<<"\t";
			for(int l=1;l<i-1;l++)
			{
				cout<<"0"<<"\t";
				
			}
			cout<<i<<endl;}
			
		} 
	}
	
	return 0;
}
