#include<iostream>
using namespace std;
string get(string s){
	string s2;int flag=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='['){
			flag=1;
		}if(s[i]==']'){
			flag=0;
		}
		if(s[i]!='['&&s[i]!=' '&&s[i]!=']'&&flag){
			s2+=s[i];
		}
	}cout<<s2<<endl;
	return s2;
}
int main(){
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	string shou=' '+get(s1);
	string yan=' '+ get(s2);
	string bi=' '+get(s3);
//	cout<<shou<<endl;
//	cout<<yan<<endl;
//	cout<<bi<<endl; 
	int n;
	cin>>n;
	//cout<<n;
	for(int i=0;i<n;i++){
		int fla=1;
		int num[5];
		for(int l=0;l<5;l++){
			cin>>num[l];
			//num[l]=num[l]-1;
			if(num[l]<0){
				fla=0;
			}
		}if(fla&&num[0]<shou.length()&&num[1]<yan.length()&&num[2]<bi.length()&&num[3]<yan.length()&&num[4]<shou.length()){
			cout<<shou[num[0]]<<"("<<yan[num[1]]<<bi[num[2]]<<yan[num[3]]<<")"<<shou[num[4]]<<endl;
		}else{
			cout<<"Are you kidding me? @\/@"<<endl;
		}
		
	}
}
