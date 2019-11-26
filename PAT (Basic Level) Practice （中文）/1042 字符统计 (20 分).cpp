#include<iostream>
using namespace std;
int sum[30];

int main(){
	string s;int max=0;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z'){
			sum[s[i]-'a']++;
			if(sum[s[i]-'a']>max){
				max=sum[s[i]-'a'];
			}
		}else if(s[i]>='A'&&s[i]<='Z'){
			sum[s[i]-'A']++;
			if(sum[s[i]-'A']>max){
				max=sum[s[i]-'A'];
			}
		}
	}for(int i=0;i<26;i++){
			if(max==sum[i]){
				printf("%c %d",i+'a',sum[i]);
				return 0;
			}
		}
	return 0;
}
