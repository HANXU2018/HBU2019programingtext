#include<iostream>
#include<vector>
using namespace std;
vector<int>num;
vector<vector<int>>sui;
int main(){
	int k,p;
	cin>>k;
	num.resize(k);
	for(int i=0;i<k;i++){
		cin>>p;
		num[i]=p;
	}
	int m,n;
	cin>>m;
	sui.resize(m);
	for(int i=0;i<m;i++){
		cin>>n;
		int q;
		for(int j=0;j<n;j++){
			cin>>q;
			sui[i].push_back(q);
		}
	}
	vector<int>ans;
	for(int i=0;i<k;i++){
		for(int j=0;j<m;j++){
			int len = sui[j].size();
			for(int q=0;q<len;q++){
				if(sui[j][q]==num[i+q]){
					if(q==len-1){
						ans.push_back(j);
						i=i+q-1;
					}
					continue;
				}else{
					break;
				}
				
			}
		}
	}
	for(int i=0;i<ans.size();i++){
		if(i>0)cout<<" ";
		cout<<ans[i]+1;
	}
	return 0;
} 
