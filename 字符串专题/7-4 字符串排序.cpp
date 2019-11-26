#include<iostream>
using namespace std;
int main(){
	string s[5];
	for(int i=0;i<5;i++){
		cin>>s[i];
	}
	for(int i=0;i<5;i++){
		for(int a=0;a<4;a++){
			if(s[a]>s[a+1]){
				string t=s[a];
				s[a]=s[a+1];
				s[a+1]=t;
			}
		}
	}
	cout<<"After sorted:"<<endl;
	for(int i=0;i<5;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}
