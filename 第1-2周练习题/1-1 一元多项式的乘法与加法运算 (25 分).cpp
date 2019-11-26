#include<iostream>
#include<map>
using namespace std;
void show(map<int,int>mult){
	auto it=mult.end();
	++it++;
	for(;it!=mult.begin();it--){
		cout<<it->second<<" "<<it->first<<" ";
	}it--;
	cout<<mult.begin()->second<<" "<<mult.begin()->first<<endl;
}
int main(){
	map<int,int>m1;
	map<int,int>m2;
	map<int,int>add;//+
	map<int,int>mult;//*
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		m1[b]=a;
		add[b]+=a;
	}cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		m2[b]=a;
		add[b]+=a;
	}for(auto it=m1.begin();it!=m1.end();it++){
		for(auto it2=m2.begin();it2!=m2.end();it2++){
			mult[it->first+it2->first]+=it->second*it2->second;
		}
	}
	show(mult);
	show(add);
	return 0;
}
