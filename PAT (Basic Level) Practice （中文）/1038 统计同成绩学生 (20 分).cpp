#include<iostream>

using namespace std;
int num[105];
int main(){
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		num[a]++;
	}
	cin>>n;
	int flag=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(flag){
			cout<<" ";
		}flag=1;
		cout<<num[a];
	}
}
