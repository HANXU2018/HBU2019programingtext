#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z'){
			count+=s[i]+1-'a';
		}if(s[i]>='A'&&s[i]<='Z'){
			count+=s[i]+1-'A';
		}
	}
	int ling=0,yi=0;
	while(count>0){
		if(count%2==0){
			ling++;
		}else{
			yi++;
		}count=count/2;
	}
	cout<<ling<<" "<<yi;
	return 0;
} 
