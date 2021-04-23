#include<iostream>
using namespace std;

void selection_sort(int a[],int n){
	
	for(int i=0;i<n-1;i++){

		int min_index=i;

		for(int j=i;j<=n-1;j++){
			if(a[j]<a[min_index]){
				min_index=j;
			}
		}
		swap(a[i],a[min_index]);
	}
}

int main(){
	int a[5]={5,4,3,1,2};
	int n=sizeof(a)/sizeof(int);
	selection_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
