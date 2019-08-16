#include<iostream> 
using namespace std;
int main(){
	string s,c;
	getline(cin,s);
	getline(cin,c);
	for(int i=0;i<s.length()&&i+c.length()<=s.length();i++){
		string s1,s2;
		s1=s.substr(i,c.length());
		if(s1==c){
			s1=s.substr(i+c.length());
			s=s.substr(0,i)+s1;
			i=0;
		}
	}
	cout<<s<<endl<<"*";
	return 0;
}
