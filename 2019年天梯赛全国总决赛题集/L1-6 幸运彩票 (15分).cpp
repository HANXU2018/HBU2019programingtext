#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]){
			cout<<"You are lucky!"<<endl;
		}else{
			cout<<"Wish you good luck."<<endl;
		}
	}
	return 0;
}
