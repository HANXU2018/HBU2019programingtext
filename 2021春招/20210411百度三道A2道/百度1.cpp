#include<iostream>
#include<vector>
using namespace std;
int ans(int a,int b){
	vector<int>aa;
	vector<int>bb;
	aa.push_back(a);
	bb.push_back(b);
	while(a>0){
		aa.push_back(a/2);
		a/=2;
	}
	while(b>0){
		bb.push_back(b/2);
		b/=2;
	}
	
	int la = aa.size()-1;
	int lb = bb.size()-1;
	//cout << la<<" "<<lb<<endl;
	int i=0;
	for(;i<=la&&i<=lb;i++){
		if(aa[la-i]==bb[lb-i]){
			continue;
		}else{
			break;
		}
	}
	return la-i+lb-i+2;
	return 0;
}
int main(){
	int t;
	cin>>t;
	int a,b;
	for(int i=0;i<t;i++){
		cin>>a>>b;
		cout<<ans(a,b)<<endl;
	}
	return 0;
}
