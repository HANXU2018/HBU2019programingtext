#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp1(vector<int>a , vector<int>b){
	if(a.size()!=b.size()){
		return a.size()>b.size();
	}
	for(int j=a.size()-1;j>=0;j--){
		if(a[j]!=b[j]){
			return a[j]<b[j];
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>>num(n);
	vector<int>fa(n);
	for(int i=0;i<n;i++){
		fa[i]=-1;
	}
	for(int i=0;i<n;i++){
		int k,p;
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>p;
			fa[p]=i;
		}
	}
	for(int i=0;i<n;i++){
		//cout<<i<<" "<<fa[i]<<endl;
	}
	for(int i=0;i<n;i++){
		int now = i;
		while(fa[now]!=-1){
			num[i].push_back(now);
			now = fa[now];
			//cout<<now<<"!!!!!"<<endl;
		}num[i].push_back(now);
	}
	sort(num.begin(),num.end(),cmp1);
	cout<<num[0].size()<<endl;
	for(int i=num[0].size()-1;i>=0;i--){
		if(i!=num[0].size()-1){
			cout<<" ";
		}
		cout<<num[0][i];
	}
	return 0;
} 
