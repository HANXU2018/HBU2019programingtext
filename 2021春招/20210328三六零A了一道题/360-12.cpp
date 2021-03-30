#include<iostream>
#include<vector>
using namespace std;
	long long c[20];
int main(){
	int n;
	long long t;
	cin>>n;
	long long sum=0;
	vector<long long>v(n);
	for(int i=0;i<n;i++){
		cin>>t;
		v[i]=t;
		sum+=t;
		for(int j=0;j<i;j++){
			sum+=v[i]|v[j];
		}
	}
		cout<<sum<<endl;
	return 0;
}
