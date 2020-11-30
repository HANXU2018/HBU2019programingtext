#include<iostream>
#include<math.h> 
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	while(b--){
		string s;
		cin>>s;
		int ans=1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='n'){
				ans+=pow(2,s.size()-i-1);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
