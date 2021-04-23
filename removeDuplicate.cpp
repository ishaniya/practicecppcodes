#include<iostream>
#include<cstring>
using namespace std;

void rem(char a[]){
	int l= strlen(a);
		if( l==1 or l==0){
			return;
		}else{
			int prev=0;
			for(int curr=1;curr<l;curr++){
			if(a[curr]!=a[prev]){
				prev++;
				a[prev]=a[curr];
			}
			
		}
		a[prev+1]='\0';
		
	}
	
}


int main(){
	char a[100];
	cin.getline(a,100);
	rem(a);
	cout<<a;
	return 0;
}
