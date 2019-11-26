#include<iostream>
using namespace std;
int main(){
	string s;
	s="123";
	for(int i=0;i<s.length();i++){
		cout<<s[i]-'0'<<endl;
	}
	return 0;
}
