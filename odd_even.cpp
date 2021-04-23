#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<=1000){
        int a[n],x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>=0 && x<=1000000000){
                a[n]=x;
            }
        }

        
        for(int i=0;i<n;i++){
            int sum_e=0,sum_o=0;
            int y,dig=0;
            y=a[n];
            while(y>0){
            	int r=0;
            	r=y%10;
            	y=y/10;
            	if(r%2==0){
            		sum_e=sum_e+r;
				}
				else{
					sum_o=sum_o+r;
				}
			}
			if(sum_e%4==0){
				cout<<"Yes"<<endl;
			}
			else if(sum_o%3==0){
				cout<<"Yes"<<endl;
			}
			else{
				cout<<"No"<<endl;
			}
        }
    }
}
