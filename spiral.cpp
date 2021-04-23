#include<iostream>
using namespace std;

void spiral(int a[1000][1000],int m,int n){
	int sr=0,sc=0,er=m-1,ec=n-1;
	while(sr<=er and sc<=ec){
		for(int i=sc;i<ec;i++){
			cout<<a[sr][i]<<ends;
		}
		sr++;
		
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<ends;
		}
		ec--;
		if(er>sr){
		
		for(int i =ec;i>=sc;i--){
			cout<<a[er][i]<<ends;
		}
		er--;
		}
		if(ec>sc){
		
		for(int i=er;i>=sr;i--){
			cout<<a[i][sc]<<ends;
		}
		sc++;}
		
	}
}
int main(){
	int m,n,val=1;
	cin>>m>>n;
	int a[100][1000]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=val;
			val=val+1;
			cout<<a[i][j]<<ends;
		}
		cout<<endl;
	}
	spiral(a,m,n);
}
