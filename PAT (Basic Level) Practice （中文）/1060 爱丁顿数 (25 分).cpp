#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>sum(n);
	for(int i=0;i<n;i++){
		cin>>sum[i];
	}sort(sum.begin(),sum.end());
	for(int i=n-1;i>=0;i--){
		if(sum[i]>n-i&&sum[i-1]<=n-i){
			cout<<n-i;
			return 0;
		}
	}
	
	return 0;
}
 
