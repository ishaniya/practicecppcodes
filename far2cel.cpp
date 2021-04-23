#include<iostream>
using namespace std;

int main(){
	int minfar,maxfar,step;
	int cel=0;
	cin>>minfar>>maxfar>>step;
	if(0<minfar<100 && minfar<maxfar && 0<step)
	{
		for(minfar;minfar<=maxfar;minfar=minfar+step){
			cel=(minfar-32)*(0.5556);
			cout<<minfar<<" "<<cel<<endl;
		}
	}
	return 0;
}
