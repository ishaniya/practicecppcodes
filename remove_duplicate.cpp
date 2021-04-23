#include<iostream>
#include<string.h>
using namespace std;

void remove(char a[]){
	int l= strlen(a);
	int prev=0,curr;
	if(l==0 or l==1){
			return;
		}
	for(curr=1;curr<l;curr++){
		if(a[curr]!=a[prev]){
			prev++;
			a[prev]=a[curr];
		}
	}
	a[prev+1]='\0';
	return;
	
}

int main(){
	char a[100];
	cin.getline(a,100);
	remove(a);
	cout<<a;
	return 0;
}
