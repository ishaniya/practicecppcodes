#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,target;
	cin>>n;
	int a[1000];
	if(1<=n<=1000){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cin>>target;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n+1;j++){
				if(a[i]+a[j]==target){
					cout<<a[i]<<" and "<<a[j]<<endl;
				}
			}
		}
	}
	
	return 0;
}
