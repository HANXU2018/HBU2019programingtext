#include<iostream>
using namespace std;
char s[300];
int cha,sheng;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		s[s1[i]]++;
	} 
	sheng=s1.length();
	for(int i=0;i<s2.length();i++){
		if(s[s2[i]]>0){
			s[s2[i]]--;
			sheng--;
		}else{
			cha++;
		}
		
	}
		if(cha==0){
			cout<<"Yes";
			if(sheng>0){
				cout<<" "<<sheng;
			}
		}
		else{
			cout<<"No "<<cha;
		}
	
	return 0;
}
