#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m,k,a,b;
	cin>>n>>m>>k;
	vector<vector<int>>v(n,vector<int>(2));
	for(int i=0;i<n;i++){
		cin>>a>>b;
		v[i][0]=a;
		v[i][1]=b;
	}
	vector<vector<int>>ans(n,vector<int>(k+1));
	vector<vector<int>>vis(n,vector<int>(k+1));
	vis[0][0]=1;
	//for(int i=0;i<k+1;i++)ans[i][0]=-1;
	ans[0][0]=v[0][1];
	int mmax=v[0][1];
	for(int i=1;i<n;i++){
		int ta = v[i][0];// ÏÂ±ê 
		int tb = v[i][1];// Öµ
		for(int j=1;j<=k;j++){
			int t = i-1;
			while(t>=0&&v[i][0]-m<=v[t][0]){
				vis[i][j]=1;
				int pa = v[t][0];
				int pb = v[t][1];
				if(tb+ans[t][j-1]>ans[i][j]&&vis[t][j-1]){
					ans[i][j]=tb+ans[t][j-1];
					if(tb+ans[t][j-1]>mmax){
						mmax=tb+ans[t][j-1];
					}
				}
				t--;
			} 
			
		}
	}
	for(int j=0;j<k+1;j++){
		for(int i=0;i<n;i++){
			cout<<ans[i][j]<<" ";
		}cout<<endl;
	}
	cout<<mmax<<endl;
	return 0;
} 
