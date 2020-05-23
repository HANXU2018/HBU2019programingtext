#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<4;i++){
		if(s[i]=='0'){
			s[i]='9';
		}else{
			s[i]=(s[i]-1);
		}
	}
	int t=1;
	t=(s[2]-'0')*1000+(s[3]-'0')*100+(s[0]-'0')*10+(s[1]-'0');
		cout<<"The encrypted number is ";
    printf("%04d",t);
	return 0;
} 
