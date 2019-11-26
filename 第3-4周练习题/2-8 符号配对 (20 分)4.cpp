#include<iostream>
using namespace std;
int top=0,p=0,zhan[100],num[100];
void quezuo(int x){
	if(x=='(')cout<<"NO\n(-?"<<endl;
	else if(x=='[')cout<<"NO\n[-?"<<endl;
	else if(x=='{')cout<<"NO\n{-?"<<endl;
	else if(x=='#')cout<<"NO\n/*-?"<<endl;
}
int you(int i){string c,d;
	if(zhan[i]==')'){c="(",d=")";}
	else if(zhan[i]==']'){c="[",d="]";}
	else if(zhan[i]=='}'){c="{",d="}";}
	else if(zhan[i]=='&'){c="/*",d="*/";}
	if(p==0){cout<<"NO\n?-"<<d<<endl;return 0;}
	if(num[p-1]==d[0]||(zhan[i]=='#'&&num[p-1]=='&')) p--;
	else{quezuo(num[p-1]);return 0;}
	return 1;
}
int main(){
	string s;
	while(s!="."){
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(s[i]=='('||s[i]==')'||s[i]=='['||s[i]==']'||s[i]=='{'||s[i]=='}'){zhan[top++]=s[i];}
			if(s[i]=='*'&&s[i+1]=='/'){zhan[top++]='&';i++;}
			else if(s[i]=='/'&&s[i+1]=='*'){zhan[top++]='#';i++;}//用 #代替/* 用&代替 */ 
		}
	}for(int i=0;i<top;i++) 
	if(zhan[i]=='('||zhan[i]=='['||zhan[i]=='{'||zhan[i]=='#'){num[p++]=zhan[i];}
	else if(you(i)==0)return 0;
    if(p>0)quezuo(num[p-1]);
    else cout<<"YES";
	return 0;
} 
