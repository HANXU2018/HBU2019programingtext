#include<iostream>
using namespace std;
int cha[300];
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		cha[s[i]]++;
	}
	while(cha['P']||cha['A']||cha['T']||cha['e']||cha['s']||cha['T']){
		if(cha['P']-->0)cout<<"P";
		if(cha['A']-->0)cout<<"A";
		if(cha['T']-->0)cout<<"T";
		if(cha['e']-->0)cout<<"e";
		if(cha['s']-->0)cout<<"s";
		if(cha['t']-->0)cout<<"t";
	}
	
	return 0;
}
