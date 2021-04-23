#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,target;
	cin>>n;
	int a[1000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cin>>target;
		for(int i=0;i<n;i++){
			int l=i+1,r=n-1;
			while(l<r){
			if(a[i]+a[l]+a[r]==target){
				cout<<i<<", "<<a[l]<<" and "<<a[r]<<endl;
				l++;
				r--;
			}
			else if(a[i]+a[l]+a[r]>target){
				r--;
			}
			else if(a[i]+a[l]+a[r]<target){
				l++;
			}
				}
		}
	
	return 0;
}
