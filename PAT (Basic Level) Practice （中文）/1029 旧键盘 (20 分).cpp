#include<iostream>
using namespace std;
int s3[256];
int main(){
	string s,s2;
	cin>>s>>s2;
	for(int i=0;i<s2.length();i++){
	if(s2[i]>='a'&&s2[i]<='z'){
		s2[i]+='A'-'a';
	}
	s3[s2[i]]=1;
	}
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z'){
		s[i]+='A'-'a';
		}
		if(s3[s[i]]!=1){
			cout<<s[i];
			s3[s[i]]=1;
		}
	}
	return 0;
}
