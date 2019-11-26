#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int a;
	cin>>a;
	a=a%s.length();
	string s1=s.substr(0,a);
	string s2=s.substr(a);
	cout<<s2<<s1;
	return 0;
}
