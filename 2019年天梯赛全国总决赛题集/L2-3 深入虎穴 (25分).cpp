#include<iostream>
#include<vector>
using namespace std;
int num[100005];
int dplen=-1;
int ans=-1;
void dfs(int root, vector<vector<int>>&lu,int dp){
	if(dp>dplen){
		dplen=dp;
		ans=root;
	}
	for(int i=0;i<lu[root].size();i++){
		dfs(lu[root][i],lu,dp+1);
	}
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>>lu(n+1);
	for(int i=1;i<=n;i++){
		int k,t;
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>t;
			num[t]++;
			lu[i].push_back(t);
		}
	}
	int ru=0;
	for(int i=1;i<=n;i++){
		if(num[i]==0)ru=i;
	}
	//cout<<ru;
	dfs(ru,lu,0);
	cout<<ans;
	return 0;
}
