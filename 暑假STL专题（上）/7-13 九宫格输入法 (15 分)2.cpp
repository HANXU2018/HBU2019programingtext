#include<iostream>
using namespace std;
string c[10]={"0 ","1,.?!","2ABC","3DEF","4GHI","5JKL","6MNO","7PQRS","8TUV","9WXYZ"};
int main(){
	string s;
	while(cin>>s){
		int n=s[0]-'0';
		int len=s.length()-1;
		if(n==0){
			len=len%2;
		}
		else if(n==7||n==9||n==1){
			len=len%5;
		}
		else{
			len=len%4;
		}
		cout<<c[n][len];
	}
	return 0;
}
