#include<iostream>
using namespace std;

int main(){
	int n,key;
	cin>>n;
	int a[]={1,3,5,7,10,11,12,13};
	/*for(int i=0;i<n;i++){
		cin>>a[i];
	}*/
	int s=16;
	int i=0,j=sizeof(a)/sizeof(int)-1;
	while (i<j){
		int cs=a[i]+a[j];
		if(cs>s)
		{
			j--;
		}
		else if(cs<s)
		{
			i++;
		}
		else if (cs==s){
			cout<<a[i]<<ends<<a[j]<<endl;
			i++;
			j--;
		}
		
	}
	return 0;
}
