#include<iostream>
#include<vector>
using namespace std;
int main(){
	string a,b;
	string s;
	int k=0;
	cin>>a>>b;
	int i=0;
	for(;i<a.length()&&i<b.length();i++){
		k+=a[a.length()-i-1]+b[b.length()-i-1]-'0'-'0';
		char c=(k%10+'0');
		s=c+s;
		k=k/10;
	}while(i<a.length()){
		k+=a[a.length()-1-i++]-'0';
		char c=(k%10+'0');
		s=c+s;
		k=k/10;
		
	} while(i<b.length()){
		k+=b[b.length()-1-i++]-'0';
		char c=(k%10+'0');
		s=c+s;
		k=k/10;
	} 
	while(k>0){
		char c=(k%10+'0');
		s=c+s;
		k=k/10;
	}
	cout<<s;
	return 0;
}
