#include<iostream>
using namespace std;
int san[1000];
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int p=0,t=0;
	for(int i=0;i<s2.length();i++){
		while(san[p]!=s2[i]&&s1[t]!=s2[i]){
			san[++p]=s1[t++];
			//cout<<"1->3"<<endl;
			if(t>s1.length()){
				cout<<"Are you kidding me?";
				return 0; 
			}
		}if(san[p]==s2[i]){
			//cout<<"3->2"<<endl;
			p--;
		}if(s1[t]==s2[i]){
			//cout<<"1->2"<<endl;
			t++;
		}
	}p=0,t=0;
	for(int i=0;i<s2.length();i++){
		while(san[p]!=s2[i]&&s1[t]!=s2[i]){
			san[++p]=s1[t++];
			cout<<"1->3"<<endl;
			if(t>s1.length()){
				cout<<"Are you kidding me?";
				return 0; 
			}
		}if(san[p]==s2[i]){
			cout<<"3->2"<<endl;
			p--;
		}if(s1[t]==s2[i]){
			cout<<"1->2"<<endl;
			t++;
		}
	}
	return 0;
} 
