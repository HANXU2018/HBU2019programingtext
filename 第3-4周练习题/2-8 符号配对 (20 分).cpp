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
		if(zhan[i]==')'){//���Ͼͳ�ջ���Բ��ϣ�����ȱ�󣬺�������ѭ���ǿվ���ȱ�ң�
			if(num[p-1]=='(')p--;//��ջ 
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
			if(num[p-1]=='{')p--;//��ջ 
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
			if(num[p-1]=='[')p--;//��ջ 
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
			if(num[p-1]=='#')p--;//��ջ 
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
