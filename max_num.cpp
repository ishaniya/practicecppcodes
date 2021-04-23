#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n>0){
		long int a[n],x,max;
		for(int i=0;i<n;i++){
			cin>>x;
			if(-1000000000<=x<=1000000000){
				a[i]=x;
			}
			else{
				break;
			}
		}
		max=a[0];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n-1;j++){
				if(a[j]>a[i]){
					max=a[j];
				}
			}
		}
		cout<<max;
	}
}

