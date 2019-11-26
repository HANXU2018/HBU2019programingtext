#include<iostream>
using namespace std;
string shou[11],yan[11],kou[11];
int get(string s,string a[]){
	int k=0;
	int flag=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='['){
			flag=1;
		}if(s[i]!=' '&&s[i]!=']'&&s[i]!='['&&flag){
			a[k]+=s[i];
			 if(s[i]=='/'){
            	a[k]+='/';
			}
		}
		if(s[i]==']'){
			flag=0;
			k++;
		}
	}
	return k;
}
int main(){
	string s1,s2,s3;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	int k1=get(s1,shou);
	int k2=get(s2,yan);
	int k3=get(s3,kou);
	int n;
	cin>>n;
	int num[5];
	for(int i=0;i<n;i++){
		int flag=1;
		for(int l=0;l<5;l++){
			cin>>num[l];
			num[l]--;
			if(num[l]<0){
				flag=0;
			}
		}if(flag&&num[0]<k1&&num[4]<k1&&num[1]<k2&&num[3]<k2&&num[2]<k3){
			cout<<shou[num[0]]<<"("<<yan[num[1]]<<kou[num[2]]<<yan[num[3]]<<")"<<shou[num[4]]<<endl;
		}else{
			cout<<"Are you kidding me? @\/@"<<endl;
		}
	}
	return 0;
}
