#include<iostream>
using namespace std;
int s,x,top,flag;
int main(){
	cin>>s>>x;
	for(int i=0;i<s;i++){
		string s;
		cin>>s;
		top=0,flag=0;
		for(int a=0;a<s.length();a++){s[a]=='S'?top==x?flag=1:top++:top==0?flag=1:top--;}
		flag==1||top!=0?cout<<"NO\n":cout<<"YES\n";}
	return 0;
} 
