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
		int l=0,r=n-1;
		while(l<r){
			if(a[l]+a[r]==target){
				cout<<a[l]<<" and "<<a[r];
				l++;
				r--;
			}
			else if(a[l]+a[r]>target){
				r--;
			}
			else if(a[l]+a[r]<target){
				l++;
			}
		}
		
	}
	
return 0;
}
