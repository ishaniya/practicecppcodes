#include<iostream>
using namespace std;

bool prime(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}

void isprime(int n){
	for(int i=1;i<=n;i++)
	{
		if(prime(i)){
			cout<<i<<" ";
		}
	}
}

int main(){
	int n;
	cin>>n;
	isprime(n);
	return 0;
}
