#include<iostream>
using namespace std;
int main(){
	string s,c;
	cin>>s;
	while(cin>>c){
		c=c+' '+s;
		s=c;
	}
	cout<<s;
	return 0;
} 
