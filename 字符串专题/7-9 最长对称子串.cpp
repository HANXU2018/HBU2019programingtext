/*#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int max=0;
	for(int i=0;i<s.length();i++){
		int count1=1;
		for(int a=1;a<=i&&a+i<s.length()&&(s[i+a]==s[i-a]);a++){
		
				count1+=2;
				if(count1>max){
					max=count1;
					//cout<<i+a<<"*"<<i-a;
			}
		
		}
		int count2=0;
		for(int a=0;a<=i&&a+i<s.length()-1;a++){
			if(s[i+a+1]==s[i-a]){
				count2+=2;
				if(count2>max){
					max=count2;
				}
			}
			else{
				break;
			}
		}
	}
	
	cout<<max;
	return 0;
}*/


#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin , s);
	int max=0,temp;
	int len=s.length();
	for(int i=0;i<len;i++){
		temp=1;
		for(int j=1;j<len;j++){
			if(i-j<0||i+j>=len||s[i-j]!=s[i+j]){
				break;
			}temp += 2;
		}
		max = temp > max? temp : max;
	}
	for(int i=0;i<len;i++){
		temp=0;
		for(int j=1;j<len;j++){
			if(i-j+1<0||i+j>=len||s[i-j+1]!=s[i+j]){
				break;
			}temp += 2;
		}
		max = temp > max? temp : max;
	}
	
	
	cout<<max;
	
	return 0;
} 
