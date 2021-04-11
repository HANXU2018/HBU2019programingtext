#include<iostream>
using namespace std;
int num[105][105]; 
int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int a,b;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		num[a][b]=1;
		num[b][a]=-1;
		for(int j=1;j<=100;j++){
			if(num[j][a]==1){
				num[j][b]=1;
				num[b][j]=-1;
			}
			if(num[b][j]==1){
				num[a][j]=1;
				num[j][a]=-1;
			}
		}
	}
	int gao=0;
	int di=0;
	for(int i=1;i<=n;i++){
		if(num[p][i]==1)gao++;
		if(num[p][i]==-1)di++;
	}
	//cout<<gao<<" "<<di<<endl;
	for(int i=di+1;i<=n-gao;i++){
		if(i>di+1)cout<<" ";
		cout<<i;
	}
	return 0;
}
