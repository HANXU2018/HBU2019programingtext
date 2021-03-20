#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,m;
		cin>>n>>m;
		vector<vector<int>>node(n,vector<int>(n));
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			node[a-1][b-1]=1;
			node[b-1][a-1]=1;
		}
		
	}
	return 0;
}
