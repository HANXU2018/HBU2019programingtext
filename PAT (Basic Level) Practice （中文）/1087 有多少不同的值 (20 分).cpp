#include<iostream>
using namespace std;
int count=0;
int add(int n){
	return n/2+n/3+n/5;
}
int out[10000];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		
		int sum=add(i);
		//cout<<sum<<" "<<i<<endl;
		if(out[sum]==0){
			count++;
			out[sum]=1;
		}
	}
	cout<<count;
	return 0;
}
