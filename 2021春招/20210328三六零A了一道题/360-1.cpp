#include<iostream>
#include<vector>
using namespace std;
	int c[20];
int main(){
	int n,t;
	cin>>n;
	int sum=0;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>t;
		v[i]=t;
		sum+=t;
		for(int j=0;j<20;j++){
			if(t&1<<j){
				c[j]++;
			}
		}
	}
	long long res =0;
	for(int i=0;i<20;i++){
		res+=(long long)(n-c[i])*c[i]*(1<<i);
		cout<<res<<endl;
	}
	cout<<res<<" "<<sum<<endl;
	
	return 0;
} 
