#include<iostream>
#include<vector>
using namespace std;
int num[10005];
//vector<int>num(n);
int n,t,p;
vector<int>ttt; 
int len(int i){
	ttt.push_back(i);
	//cout<<i<<" "<<num[i]<<endl;
	if(num[i]==-1){
		return 1;
	}
	else return len(num[i])+1; 
}
int main(){
	cin>>n;
	for(int i=0;i<10005;i++){
		num[i]=-1;
	}
	for(int i=0;i<n;i++){
		cin>>t;
		for(int j=0;j<t;j++){
			cin>>p;
			num[p]=i;
		}
	} 
	int max = -1;
	int mmaxstart = 0;
	for(int i=1;i<=n;i++){
		int tt = len(i);
		if(tt>max){
			max = tt;
			mmaxstart = i;
		}
	}
	vector<int>ans;
	int pp = mmaxstart;
	while(ans.size()<max){
		ans.push_back(pp);
		pp = num[pp];
	}cout<<max<<endl;
	for(int i=max-1;i>=0;i--){
		if(i!=max-1){
			cout<<" ";
		}
		cout<<ans[i];
	}
	//cout<<mmaxstart<<" "<<max<<endl;
	return 0;
} 
