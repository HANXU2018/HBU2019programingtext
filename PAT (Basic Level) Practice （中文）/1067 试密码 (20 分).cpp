#include<iostream>
using namespace std;
int main(){
	string s,s2;
	int n;
	cin>>s>>n;
	int count=0;
	while(cin>>s2){
		if(s2[0]=='#'){
			return 0;
		}
		count++;
		if(count<=n&&s==s2){
			cout<<"Welcome in";
			return 0;
		}
        else{
			cout<<"Wrong password: "<<s2<<endl;
            if(count>=n){
                cout<<"Account locked";
                return 0;
            }
		}
	}
	return 0;
} 
