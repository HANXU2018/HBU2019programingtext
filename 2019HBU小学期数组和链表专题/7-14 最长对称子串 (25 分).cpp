#include<iostream>
using namespace std;
int main(){
	string a;
	string s;
	while(cin>>a){
		s=s+a+' ';
	}
	int len=s.length()-1;
	int max=0;
	//»ùÊý
	for(int i=0;i<len;i++){
		int n=0;
		int count=0;
		for(n=0;n<i;n++){
			if(i+n<len){
				
			}
			if(s[i+n]==s[i-n]){
				count++;
				if(count>max){
					max=count;
				}
			}
		}
	} 
	int m=max*2-1;
	//Å¼Êý
	 max=0;
	 	for(int i=1;i<len;i++){
		int n=0;
		int count=0;
		for(n=0;n<i;n++){
			if(s[i+n-1]==s[i-n]){
				count++;
				if(count>max){
					max=count;
				}
			}
		}
	} 
	 int m2=max*2;
	 if(m==1&&m2==1){
	 	cout<<0;
	 	return 0;
	 }
	 
	 if(m>m2){
	 	cout<<m;
	 }
	 else{
	 	cout<<m2;
	 }
	 
	
	return 0;
}
