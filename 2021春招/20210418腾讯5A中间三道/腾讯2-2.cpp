#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	//vector<vector<int>>ans(1005,vector<int>() );
	vector<int>nums(n+1);
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		//ans[t].push_back(i+1);
		nums[i+1]=t;
	}
	int i=0;
	while(k>0){
		i++;
//		for(int p=1;p<=i&&p<=1000;p++){
//			if(i%p==0){
//				for(int j=0;k>0&&j<ans[p].size();j++){
//					cout<<ans[p][j]<<endl;
//					k--;
//				}
//			}
//		}
		for(int j=1;j<=n&&k>0;j++){
			if(i%nums[j]==0){
				cout<<j<<endl;
				k--;
			}
		}
	}
} 
