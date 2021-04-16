#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,k,a,b;
	cin>>n>>k;
	vector<int>num(n);
	for(int i=0;i<n;i++){
		num[i]=i+1;
	}
	while(k--){
		cin>>a>>b;
		if(a==b){
			continue;
		}
		int t=0,len=(b+1-a)/2;
		for(int i=0;i<len;i++){
			t=num[a-1+i];
			num[a-1+i]=num[b-1-i];
			num[b-1-i]=t;
		}
//		for(int i=0;i<n;i++){
//		cout<<num[i]<<" ";
//		}cout<<endl;
	}
	long long int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(num[i]>num[j]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
