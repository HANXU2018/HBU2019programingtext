#include<iostream>
using namespace std;
int count[10];
int main(){
	int n;
	string s;
	cin>>s>>n;
	for(int i=0;i<n-1;i++){
		for(int a=0;a<10;a++){
			count[a]=0;
		}
		string s2;
		
		for(int a=0;a<s.length();a++){
			count[s[a]-'0']++;
			if(a==s.length()-1||s[a]!=s[a+1]){
			
				s2+=to_string(s[a]-'0');
				s2+=to_string(count[s[a]-'0']);
				count[s[a]-'0']=0;
			}
		}
		
		s=s2;
		
	} 
	cout<<s<<endl;
	
	return 0;
}
