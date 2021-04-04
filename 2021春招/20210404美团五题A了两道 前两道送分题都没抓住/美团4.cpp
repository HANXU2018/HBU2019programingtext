#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
struct node{
	int x;
	int y;
	int val=0;
};
int main(){
	int n,k;
	cin>>n>>k;
	vector<vector<int>>nums(n,vector<int>(n));
	vector<bool>bl(k+1);
	vector<vector<node>>value(k+1,vector<node>() );
	int t;
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>t;
			nums[i][j]=t;
			node nn;
			nn.x=i;
			nn.y=j;
			nn.val=0;
			value[t].push_back(nn);
			if(bl[t]==false){
				bl[t]=true;
				count++;
			}
		}
	}
		int ans = 99999;
	if(count!=k){
		cout<<"-1"<<endl;
		return 0;
	}else{
		for(int i=2;i<=k;i++){
			for(int j=0;j<value[i].size();j++){
				int min = 999999;
				node x = value[i][j];
				cout<<x.val<<" "<< i <<endl;
				for(int p=0;p<value[i-1].size();p++){
					node y = value[i-1][p];
					cout<<abs(x.x-y.x)<<" "<<abs(x.y-y.y)<<" "<<y.val<<endl;
					int sum = abs(x.x-y.x)+abs(x.y-y.y)+y.val;
					cout<<sum<<endl;
					if(sum<min){
						min = sum;
					}
				}
				 value[i][j].val = min;
			}
			if(i==k){
					for(int j=0;j<value[i].size();j++){
						if(value[i][j].val<ans){
							ans = value[i][j].val;
						}
					}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
