#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	if(s[0]=='C'){
		getchar();
		char c,d;
		int count=1;
		c=getchar();
		while(c!='\n'){
			d=getchar();
			while(c==d&&d!='\n'){
				d=getchar();
				count++;
			}if(count>1){
				cout<<count<<c;
			}else{
				
				cout<<c;
			}count=1;
			c=d;
			
		}
	} 
	else {
		getchar();
		char c;
		while(c!='\n'){
			int i;
			if(scanf("%d",&i)){
				c=getchar();
				for(int a=0;a<i;a++){
					cout<<c;
				} 
			}else{
				c=getchar();
				cout<<c;
			}
		}
	}
	return 0;
}
