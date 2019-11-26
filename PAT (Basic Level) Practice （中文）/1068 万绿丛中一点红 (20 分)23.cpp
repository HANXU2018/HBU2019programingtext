#include<iostream>
#include<vector>
#include<map>
using namespace std;
int m,n,c;
vector<vector<int>>v;
int cha[8][2]={
{0,1},{1,1},{-1,1},{0,-1},{1,-1},{1,0},{-1,0} ,{-1,-1}
};
bool ju(int i,int j){
	for(int k=0;k<8;k++){
		int i1=i+cha[k][0];
		int j1=j+cha[k][1];
		if(i1>=0&&j1>=0&&i1<n&&j1<m&&v[i][j]-v[i1][j1]>=-c&&v[i][j]-v[i1][j1]<=c){
			return false;
		}
	}return true;
}
int main(){
	cin>>m>>n>>c;
	map<int,int>mp;
	v.resize(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
			mp[v[i][j]]++;
		}
	}int num=0;
	int x,y;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mp[v[i][j]]==1&&ju(i,j)){
				num++;
				x=i,y=j;
			}
		}
	}if(num==0){printf("Not Exist");
	}else if(num>1){
		cout<<"Not Unique";
	}else{printf("(%d, %d): %d",y+1,x+1,v[x][y]);
		
	}
		
	
}
