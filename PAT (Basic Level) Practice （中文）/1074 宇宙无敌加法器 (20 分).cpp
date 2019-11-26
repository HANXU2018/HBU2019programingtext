#include<iostream>
using namespace std;
int main(){
	string n,s1,s2,s;
	cin>>n>>s1>>s2;
	char c;
	int count;
	int k=0;
	for(int i=1;i<=s1.length()+1||i<=s2.length()+1;i++){
		int bit=n[n.length()-i]-'0';
		if(s1.length()>=i&&s2.length()>=i){
				k+=s1[s1.length()-i]-'0'+s2[s2.length()-i]-'0';
		}else if (s2.length()>=i){
			k+=s2[s2.length()-i]-'0';
		}else if(s1.length()>=i){
			k+=s1[s1.length()-i]-'0';
		}
		//cout<<k<<" ****";
		int k2=n[n.length()-i]-'0';
		if(k2==0){
			k2=10;
		}
		char s3=k%k2+'0';
		s=s3+s;
		//cout<<s<<endl;
		k=k/k2;
	}
	int i=0;
	while(s[i]=='0'){
		i++;
	}
	if(i==s.length()){
		cout<<"0";
	}
	for(i;i<s.length();i++){
		cout<<s[i];
	}
	return 0;
}
