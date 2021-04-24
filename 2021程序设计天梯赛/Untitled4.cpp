#include<iostream>
using namespace std;
int xinqing[25];
int main(){
	int t;
	for(int i=0;i<24;i++){
		cin>>t;
		xinqing[i]=t;
	}
	while(cin>>t){
		if(t>23||t<0){
			return 0;
		}
		if(xinqing[t]>50){
			cout<<xinqing[t]<<" Yes"<<endl;
		}else{
			cout<<xinqing[t]<<" No"<<endl;
		}
	}
	return 0;
} 
