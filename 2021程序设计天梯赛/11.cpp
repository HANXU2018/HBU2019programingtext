#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
struct node{
	vector<int>yangli;
	string key;
	int count;
};
int n,m;
bool cmp1(node a, node b){
	if(a.count!=b.count){
		return a.count>b.count;
	}
	for(int i=0;i<m;i++){
		if(a.yangli[i]!=b.yangli[i]){
			return a.yangli[i]<b.yangli[i];
		}
	}
	return a.key<b.key;
}
int main(){	
	cin>>n>>m;
	map<string,int>cot;
	vector<node>num(n);
	int  t;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>t;
			num[i].yangli.push_back(t);
			num[i].key+=t;
		}
		cot[num[i].key]++;
		num[i].count = cot[num[i].key];
	}
	sort(num.begin(),num.end(),cmp1);
	int nuuu=0;
	for(int i=0;i<num.size();i++){
		if(num[i].count!=cot[num[i].key]){
			continue;
		}else{
			nuuu++;
		}
	}cout<<nuuu<<endl;
	for(int i=0;i<num.size();i++){
		if(num[i].count!=cot[num[i].key]){
			continue;
		}
		cout<<num[i].count;
		for(int j=0;j<num[i].yangli.size();j++){
			cout<<" "<<num[i].yangli[j];
		}
		cout<<endl;
	}
	return 0;
} 
