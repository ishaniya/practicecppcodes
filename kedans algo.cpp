#include<iostream>
using namespace std;

int main(){
	int n,currsum=0,maxsum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		currsum=currsum+a[i];
		if(currsum<0){
			currsum=0;
		}
		maxsum=max(currsum,maxsum);
	}
	cout<<endl<<maxsum;
	return 0;
}
