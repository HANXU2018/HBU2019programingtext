#include<iostream>
#include<vector>
using namespace std;
vector<int>num;

int len(int a,int b){
	//cout<<a<<" "<<b;
	int rt = 0;
	vector<int>aa;
	vector<int>bb;
	while(a != 0){
		aa.push_back(a);
		a = num[a];
	}
	while(b != 0){
		bb.push_back(b);
		b = num[b];
	} 
	aa.push_back(0);
	bb.push_back(0);
	int i=0;
	for(i=0;aa[aa.size()-1-i]==bb[bb.size()-1-i];i++);
	rt = aa.size()+bb.size()-i*2;
	//cout<<rt<<endl;
	return rt;
}
int main(){
	int n,t;
	cin>>n;
	num.resize(n);
	for(int i=1;i<n;i++){
		cin>>t;
		num[i]=t-1;
	}
	
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int t= j+1;t<n;t++){
				int a = i;
				int b = j;
				int c = t;
				int sum = len(a,b)+len(b,c)+len(a,c);
				if(sum>ans)ans=sum;
			}
		}
	}
	
	cout<<ans<<endl;
	return 0;
} 
