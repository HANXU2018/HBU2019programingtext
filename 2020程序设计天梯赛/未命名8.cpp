#include<iostream>
#include<vector>
using namespace std;
int path[205][205];
int main(){
	int n,m;
	cin>>n>>m;
	int a,b,c;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		path[a][b]=c;
		path[b][a]=c;
	}
	int t;
	cin>>t;
	int pre=0;
	int p;
	int mmin=9999999;
	int count=0;
	int mminindex=0;
	for(int z=1;z<=t;z++){
		vector<int>vis(n);
		cin>>p;
		pre=0;
		int now;
		int sum=0;
		int flag=0;
		for(int i=0;i<p;i++){
			cin>>now;
			vis[now-1]++;
			sum+=path[pre][now];
			//cout<<sum<<" "<<path[pre][now]<<endl;
			if(path[pre][now]==0){
				flag=-1;
				break;
			}
			pre=now;
		}
		sum+=path[pre][0];
		if(path[pre][0]==0){
			flag=-1;
		}
		for(int o=0;o<n;o++){
			if(vis[o]!=1){
				flag=-1;
				//cout<<" meiyou fangwen "<<o+1<<endl;
			}
		}
		if(flag==-1){
			continue;
		}else{
			//cout<<z<<"keyi"<<endl;
			count++;
		}
		if(sum<mmin){
				mminindex=z;
				mmin=sum;
		}
	}
	cout<<count<<endl<<mminindex<<" "<<mmin;
	return 0;
}
