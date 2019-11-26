#include<iostream>
using namespace std;
char zhan[1000];
int zhanfuhao[300];
int waifuhao[300];
int p=0;
int main(){
	zhanfuhao['*']=2;
	zhanfuhao['/']=2;
	zhanfuhao['+']=1;
	zhanfuhao['-']=1;
	zhanfuhao['(']=0;
	zhanfuhao[')']=-1;
	waifuhao['*']=2;
	waifuhao['/']=2;
	waifuhao['+']=1;
	waifuhao['-']=1;
	waifuhao['(']=4;
	waifuhao[')']=-1;
	string s;
	getline(cin,s);
	cout<<s[0];
	for(int i=1;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9'){
			cout<<" "<<s[i];
		}else{
			if(waifuhao[s[i]]>zhanfuhao[p]){
				zhanfuhao[++p]=s[i];
			}else{
				if(s[i]==')'){
					while(!='('){
					cout<<" "<<s[i];
					p--;	
				}
				}
				else{
				cout<<" "<<s[i];
				p--;
				}
			}
		}
		
	}
	return 0;
}
