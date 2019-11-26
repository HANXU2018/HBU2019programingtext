#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(s[0]=='C'){
		getchar();
		string s;
		getline(cin,s); 
		int count=1;
		for(int i=0;i<s.length();i++){
			if(s[i]==s[i+1]){
				count++;
			}else{
				if(count>1){
					cout<<count<<s[i];
				}else{
					cout<<s[i];
				}
				count=1;
			} 
		}
	} 
	else {
		getchar();
		char c;
		while(1){
			int i;
			c=getchar();
			
			if(c!=' '){
				ungetc(c, stdin);
			}else{
				cout<<c;
			}
			if(scanf("%d",&i)){
				c=getchar();
                if(c==EOF){
					return 0;
				} 
				for(int a=0;a<i;a++){
					cout<<c;
				}
                
			}
			else{
				c=getchar();
				if(c==EOF){
					return 0;
				}
				cout<<c;
                
			}
		}
	}
	return 0;
}
