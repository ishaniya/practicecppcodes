#include<iostream>
#include<cstring>
using namespace std;

bool pal(char a[]){
	int i=0,j=strlen(a)-1;
	
	while(i<j){
		if(a[i]==a[j]){
			i++;
			j--;
		}
		else{
			return false;
		}
		return true;
	}
}

int main(){
	char a[100];
	cin.getline(a,100);
	if(pal(a)){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not";
	}
}
