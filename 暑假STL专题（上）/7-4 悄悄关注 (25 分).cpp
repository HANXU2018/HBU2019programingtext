#include<iostream>
#include<set>
#include<map>
#include<algorithm>


using namespace std;
int main(){
map<string ,int >::iterator it;
	map<string ,int >mp;
	int n;
	cin>>n;
	set<string >s;
	for(int i=0;i<n;i++){
		string s1;
		cin>>s1;
		s.insert(s1);
	}
	cin>>n;
	int sum=0;
	int score;
	string name;
	for(int i=0;i<n;i++){
		cin>>name>>score;
		sum+=score;
		if(s.find(name)==s.end()){
			mp[name]=score;
		}
	}
	float average=sum/n;
	int count=0;
	//sort(mp.begin(),mp.end());
	for(it=mp.begin();it!=mp.end();++it){
		//cout<<it->first<<average<<it->second<<endl;
		if(it->second>average){
			cout<<it->first<<endl;
			count++;
		}
	}
	if(count==0){
		cout<<"Bing Mei You";
	}
	return 0;
}
