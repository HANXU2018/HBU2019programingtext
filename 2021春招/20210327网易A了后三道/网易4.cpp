#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t,y;
	cin>>t>>y;
	vector<int>num;
	int p;
	int sum=0;
	while(cin>>p){
		num.push_back(p);
		sum+=p;
	}
	if(sum<t){
		cout<<-1<<endl;
	}
	int len = sum-t;
	vector<int>dp(len+1);
	for(int i=0;i<num.size();i++){
		for(int j=len;j>=0;j--){
			if(num[i]>j) break;
			if((dp[j-num[i]]+num[i])>dp[j]){
				dp[j]= dp[j-num[i]]+num[i];
			}
		}
	}
	cout<<sum-dp[len];
	
	return 0;
}
