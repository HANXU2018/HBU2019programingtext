#include<iostream>
using namespace std;
string s;
bool ishui(string s){
	for(int i=0;i<s.length()/2;i++){
		if(s[i]!=s[s.length()-1-i]){
			return false;
		}
	}
	return true;	
}
string add(string s){
	string s2=s;
	for(int i=0;i<s.length();i++){
		s2[i]=s[s.length()-1-i];
	}
	string s3;
	int a=0;
	for(int i=s.length()-1;i>=0;i--){
		a=(s2[i]-'0')+(s[i]-'0')+a;
		s3=(char)(a%10+'0')+s3;
		a=a/10;
	}
	if(a>0){
		s3=(char)(a%10+'0')+s3;
	}
	cout<<s<<" + "<<s2<<" = "<<s3<<endl;
	return s3;
}
int main(){
	
	cin>>s;
	for(int i=0;i<10;i++){
		if(ishui(s)){
			cout<<s<<" is a palindromic number.";
			return 0;
		}
		else {
			s = add(s);
		}
	}
	cout<<"Not found in 10 iterations.";
	return 0;
	
}
