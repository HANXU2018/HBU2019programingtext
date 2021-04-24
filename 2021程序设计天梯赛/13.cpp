#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> >numqian;
vector<vector<int> >numjin;
vector<int>hui;
int n,m,q;
vector<vector<int> >xianlu;
vector<int>temp;
vector<int>vis;
void dfs(int a){
	for(int i=1;i<=n;i++){
		if(numqian[a][i]>0&&vis[i]==0){
			temp.push_back(i);
			if(i==n){
				xianlu.push_back(temp);
			}
			vis[i]=1;
			dfs(i);
			temp.pop_back();
			vis[i]=0;
		}
	}
}
void out(){
	int mincount;
	int count=0;
	for(int i=0;i<xianlu.size();i++){
		count=0;
		//´¿Ç® 
		for(int j=1;j<xianlu[i].size();j++){
			count+=numqian[j-1][j];
		}
		if(count>mincount){
			mincount=count;
		}
		
//		// ½ð±Ò
//		vector<int>jin(xianlu[i].size());
//		int ppp = xianlu[i].size();
//		jin[xianlu[i].size()-1]=numjin[ppp-2][ ppp-1];
//		//cout<<" jin"<<jin[xianlu[i].size()-1]<<" ";
//		for(int j=xianlu[i].size()-2;j>=1;j--){
//			jin[j]=jin[j+1]+numjin[j-1][j];
//			//cout<<jin[j]<<" ";
//		}//cout<<endl;
//		cout<<"jin";
//		for(int j=;j<jin.size();j++){
//			cout<<jin[j]<<" ";
//		}cout<<endl;
//		
//		count=0;
//		for(int j=1;j<xianlu[i].size();j++){
//			count+=numqian[j-1][j];
//			int sum = count+ jin[j+1]/hui[xianlu[i][j]];
//		//	cout<<count<<" "<<jin[j+1]<<"%%%%"<<sum<<endl;
//			if(sum<mincount){
//				mincount = sum;
//			}
//		}
		//cout<<"*****"<<endl;
		 
	}
	cout<<mincount;
}
int main(){
	
	cin>>n>>m>>q;
	//vector<int>hui(n+1);
	//vector<vector<int>>numqian(n+1,vector<int>(n+1));
	//vector<vector<int>>numjin(n+1,vector<int>(n+1));
	temp.push_back(1);
	hui.resize(n+1);
	vis.resize(n+1);vis[1]=1;
	numqian.resize(n+1,vector<int>(n+1));
	numjin.resize(n+1,vector<int>(n+1));
	for(int i=0;i<m;i++){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		numqian[a][b]=c;
		//numqian[b][a]=c;
		numjin[a][b]=d;
		//numjin[b][a]=d;
	}
	int t;
	for(int i=1;i<=n;i++){
		cin>>t;
		hui[i]=t;
	}
	dfs(1);
	for(int i=0;i<q;i++){
		int a,b;
		cin>>a>>b;
		hui[a]=b;
		out();
	}
	
//	for(int i=0;i<xianlu.size();i++){
//		for(int j=0;j<xianlu[i].size();j++){
//			cout<<xianlu[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	return 0;
} 
