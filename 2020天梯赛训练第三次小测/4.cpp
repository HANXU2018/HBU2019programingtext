#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int num[100]; 
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	m=m%n;
	int flag = 0;
	for(int i=0;i<n;i++){
		if(flag){
			cout<<" ";
		}flag=1;
		cout<<num[(i+m)%n];
	}
	return 0;
}
