#include<iostream>
using namespace std;
char num[100];
int zhanfuhao[300];
int waifuhao[300];
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
	cin>>s;
	int flag=0;
	int p=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9'&&s[i]!=' '){
			if(flag)cout<<" "<<s[i];
			else{cout<<s[i];}
			flag=1;
		}else{
			if(waifuhao[s[i]]>zhanfuhao[num[p]]){
				num[++p]=s[i];
			}else{
				if(num[p]=='('){
					p--;
				}cout<<" "<<num[p--];
				if(s[i]!=')'&&s[i]!=' '){
					cout<<" "<<s[i];
				}while(p>=0&&waifuhao[s[i]]<=zhanfuhao[num[p]]){
					if(num[p]!='('&&num[p]!=' '&&p>0)
					{
					cout<<" "<<num[p];
					p--;
					}
					else{
						p--;
					}
				}
				
			}
		}
	}//cout<<p<<endl;
	while(p>0){
		cout<<" "<<num[p--];
	}
	return 0;
} 
