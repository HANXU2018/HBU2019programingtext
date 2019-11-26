#include<iostream>
using namespace std;
int countp[100005];
int main(){
	string s;
	cin>>s;
	int cp=0,ct=0;
	long long int sum=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='P'){
			cp++; 
		} countp[i]=cp;
	}for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='T'){
			ct++;
		}else if(s[i]=='A'){
			//cout<<countp[i]<<endl; 
			sum=(sum+(countp[i]*ct%1000000007))%1000000007;
		}
	}cout<<sum;
	
	return 0;
}
