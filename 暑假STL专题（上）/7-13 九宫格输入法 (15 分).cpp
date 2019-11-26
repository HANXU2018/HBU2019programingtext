#include<iostream>
using namespace std;
string c[10]={" ",",.?!","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
int main(){
	string s;
	while(cin>>s){
		int n=s[0]-'0';
		int len=s.length()-2;
		if(n==0){
			len=0;
		}
		else if(n==7||n==9){
			len=len%4+1;
		}
		else{
			len=len%3+1;
		}
		cout<<c[n][len-1];
	}
	return 0;
}
