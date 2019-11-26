#include<iostream>
using namespace std;
int top=0,p=0,zhan[100],num[100];
int main(){
	string s;
	while(s!="."){
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(s[i]=='('||s[i]==')'||s[i]=='['||s[i]==']'||s[i]=='{'||s[i]=='}'){zhan[top++]=s[i];}
			if(s[i]=='*'&&s[i+1]=='/'){zhan[top++]='&';i++;}
			else if(s[i]=='/'&&s[i+1]=='*'){zhan[top++]='#';i++;}
		}	
	}
	for(int i=0;i<top;i++){printf("%c",zhan[i]);
		if(zhan[i]=='('||zhan[i]=='['||zhan[i]=='{'||zhan[i]=='#'){
			num[p++]=zhan[i];
		}
		if(zhan[i]==')'){//对上就出栈，对不上，就是缺左，后面跳出循环非空就是缺右；
			if(num[p-1]=='(')p--;//出栈 
			else if(num[p-2]=='('){
				if(num[p-1]=='#'){
				cout<<"NO\n/*-?";
				}else{
				cout<<"NO\n"<<num[p-1]<<"-?";
				}return 0;
			}
			else {
				cout<<"NO\n?-)";return 0; 
			}
		}if(zhan[i]=='}'){
			if(num[p-1]=='{')p--;//出栈 
			else if(num[p-2]=='{'){
				if(num[p-1]=='#'){
				cout<<"NO\n/*-?";
				}else{
				cout<<"NO\n"<<num[p-1]<<"-?";
				}return 0;
			}
			else {
				cout<<"NO\n?-}";return 0; 
			}
		}if(zhan[i]==']'){
			if(num[p-1]=='[')p--;//出栈 
			else if(num[p-2]=='['){
				if(num[p-1]=='#'){
				cout<<"NO\n/*-?";
				}else{
				cout<<"NO\n"<<num[p-1]<<"-?";
				}return 0;
			}
			else {
				cout<<"NO\n?-]";return 0; 
			}
		}if(zhan[i]=='&'){
			if(num[p-1]=='#')p--;//出栈 
			else if(num[p-2]=='#'){
				if(num[p-1]=='#'){
				cout<<"NO\n/*-?";
				}else{
				cout<<"NO\n"<<num[p-1]<<"-?";
				}return 0;
			}
			else {
				cout<<"NO\n?-*/";return 0; 
			}
		}
	}
	if(p>0){
		if(num[p-1]=='#'){
			cout<<"NO\n/*-?";
		}else{
			cout<<"NO\n"<<num[p-1]<<"-?";
		}return 0;
	}cout<<"YES"<<endl;
	return 0;
}
