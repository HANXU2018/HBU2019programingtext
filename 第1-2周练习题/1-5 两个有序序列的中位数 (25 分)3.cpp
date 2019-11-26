#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	unordered_set<int>mp;
	for(int i=0;i<n;i++){
		cin>>a;
		mp.insert(a);
	}
	for(int i=0;i<n;i++){
		cin>>a;
		mp.insert(a);
	}
	sort(mp.begin(),mp.end());
	int i=0;
 	for(auto it= mp.begin();it != mp.end();i++,it++)if(i==(mp.size()-1)/2){cout<<*it;}
    
	return 0;
}
