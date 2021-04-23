#include<iostream>
using namespace std;

int main(){
	int a[10]={};
	int n=sizeof(a)/sizeof(int);
	int i;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int max=INT_MIN;
	int min=INT_MAX;
	
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<endl<<min<<endl<<max;
	
}
