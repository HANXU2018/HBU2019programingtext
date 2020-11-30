#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	vector<string>op(n-1);
	for(int i=0;i<n-1;i++){
		cin>>op[i];
	}
	for(int i=n-1;i>0;i--){
		if(op[i-1]=="+"){
			num[i-1]=num[i-1]+num[i];
		}
		if(op[i-1]=="-"){
			num[i-1]=num[i-1]-num[i];
		}
		if(op[i-1]=="*"){
			num[i-1]=num[i-1]*num[i];
		}
		if(op[i-1]=="/"){
			if(num[i]==0){
				cout<<"ERROR: "<<num[i-1]<<"/0"<<endl;
				return 0;
			}
			num[i-1]=num[i-1]/num[i];
		}
		//cout<<num[i-1]<<endl;
	}
	cout<<num[0];
	return 0;
}
