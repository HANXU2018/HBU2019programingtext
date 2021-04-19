#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<vector<int>>ans(1005,vector<int>() );
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		ans[t].push_back(i+1);
	}
	int i=0;
	while(k>0){
		i++;
		for(int p=1;p<=i&&p<=1000;p++){
			if(i%p==0){
				for(int j=0;k>0&&j<ans[p].size();j++){
					cout<<ans[p][j]<<endl;
					k--;
				}
			}
		}
	}
} 
