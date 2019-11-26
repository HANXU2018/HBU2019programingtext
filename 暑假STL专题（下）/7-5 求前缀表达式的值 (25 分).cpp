#include<iostream>
using namespace std;
string s,s2[30];
int a,b;
float c[30];
int main(){
	while(cin>>s){
		if(s=="+"||s=="-"||s=="*"||s=="/"){
			s2[++a]=s;
			cout<<s<<a<<endl;
		}else{
			 sscanf(s.c_str(),"%f",&c[++b]);
		}
	}
	while(a>=0&&b>=0){
		int d=--b;
		if(s2[a]=="+"){a--;
		c[d]=c[d]+c[d+1];
		}
		if(s2[a]=="-"){a--;
		c[d]=c[d]-c[d+1];
		}
		if(s2[a]=="*"){a--;
		c[d]=c[d]*c[d+1];
		}
		if(s2[a]=="/"){a--;
		c[d]=c[d]/c[d+1];
		}
		cout<<c[d]<<" "<<d<<s2[a+1]<<endl;
	}
	printf("%.1f",c[0]);
	return 0;
} 
