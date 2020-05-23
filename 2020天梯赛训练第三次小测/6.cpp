#include<iostream>
using namespace std;
	int num[10];
int main(){
	string s;
	cin>>s;
	string ans="";
	int flag=1;
	int t=0;
	for(int i=0;i<s.length();i++){
		t=t+(s[i]-'0')*2;
		ans = ""+(t%10)+ans;
		cout<<ans<<endl;
		t=t/10;
	}
	if(t!=0){
		ans = ""+(t)+ans;
		flag=0;
	}
	for(int i=0;i<s.size();i++){
		num[s[i]-'0']++;
		num[ans[i]-'0']--;
	}
//	long long int t;
//	cin>>t;
//
//	long long int ans = t*2;
//	long long int ans2=ans;
//	while(t>0){
//		num[t%10]++;
//		t=t/10;
//	}
//	while(ans2>0){
//		num[ans2%10]--;
//		ans2=ans2/10;
//	}
//	int flag=1;
	for(int i=0;i<10;i++){
		cout<<num[i]<<" "<<i<<endl;
		if(num[i]!=0){
			flag=0;
		}
	}
	if(flag==1){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}cout<<ans;
	return 0;
}
