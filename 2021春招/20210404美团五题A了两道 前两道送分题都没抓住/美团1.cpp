#include<iostream>
#include<vector>
using namespace std;
int main(){
	string s;
	cin>>s;
	vector<vector<int>>num(s.size(),vector<int>(26,0));
	for(int i=0;i<s.size();i++){
		for(int j=0;i>0&&j<26;j++){
			num[i][j]=num[i-1][j]; 
		}
		num[i][s[i]-'a']++;
	}
	
//	for(int i=0;i<s.size();i++){
//		for(int j=0;j<26;j++){
//			cout<<num[i][j]<<" ";
//		}cout<<endl;
//	}
	return 0;
} 
