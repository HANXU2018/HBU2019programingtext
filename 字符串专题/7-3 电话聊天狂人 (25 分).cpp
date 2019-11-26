#include<iostream>
#include<map>
using namespace std;
map<string ,int >mp;
map<string ,int >::iterator it;
int main(){
	int n;
	cin>>n;
	int max=0;
	string maxid;
	for(int i=0;i<n;i++){
		string s1,s2;
		cin>>s1>>s2;
		mp[s1]++;
		mp[s2]++;
		if(mp[s1]>max){
			max=mp[s1];
			maxid=s1;
		}
		if(mp[s2]>max){
			max=mp[s2];
			maxid=s2;
		}
	}
	int t=0;
	string a;
	for(it=mp.begin();it!=mp.end();++it){
		if(it->second==max){
			if(t==0) a=it->first;
			t++;
		}
	}
	if(t>1)
	cout<<a<<" "<<max<<" "<<t<<endl;
	else
	cout<<a<<" "<<max<<endl;
	return 0;
}
