#include<iostream>
#include<vector>
using namespace std;
//vector<vector<int>>nums(n+1,vector<int>(n+1));
//	vector<int>val(n+1);
int nums[501][501];
int val[501];
int vis[501];
int n,T;
int ans=0;
int count=0;
void dfs(int u,int v,int T,int sum){
	if(T-nums[u][v]<0||nums[u][v]==-1)return;
//	cout<<u<<"V=="<<v<<"T=="<<T<<"SUM=="<<sum<<endl;
//	cout<<T<<"yyyyy"<<endl;
	T = T-nums[u][v];
	if(vis[v]==0){
		sum+=val[v];
		cout<<u<<" "<<v<<" =>"<<sum<<endl;
		vis[v]=1;
	}
//	cout<<T<<"tttt"<<endl;
	if(v==1){
		cout<<T<<" "<<u<<" "<<v<<" "<<sum<<endl; 
		if(sum>ans)ans=sum;
	}
	for(int i=1;i<=n;i++){
		if(v==i){
			continue;
		}
		cout<<"v=="<<v<<"i=="<<i<<endl;
		if(nums[v][i]!=-1){
			count++;
			if(count<=(n-1)*2){
				dfs(v,i,T,sum);	
				//vis[i]=0;
			}
			count--;
		}
	}
	vis[v]=0;
	//sum-=val[v];
}
int main(){
	for(int i=0;i<501;i++){
		for(int j=0;j<501;j++){
			nums[i][j]=-1;
		}
	}
	
	cin>>n>>T;
	
	nums[1][1]=0;
	int t;
	for(int i=1;i<=n;i++){
		cin>>t;
		val[i]=t;
	}
	int u,v,w;
	for(int i=0;i<n-1;i++){
		cin>>u>>v>>w;
		nums[u][v]=w;
		nums[v][u]=w;
	}
	//cout<<T<<endl;
	dfs(1,1,T,0);
	cout<<ans<<endl;
	return 0;
} 
