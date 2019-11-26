#include<iostream>
using namespace std;
bool isprimer(int n){
	if(n==0||n==1){
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int a,b,n;
	cin>>a>>b;
    string s,s2;
    cin>>s;
	for(int i=0;i<=a-b;i++){
		s2=s.substr(i,b);
		n=stoi(s2);
		if(isprimer(n)){
			cout<<s2<<endl;
			return 0;
		}
	}
	cout<<"404"<<endl;
	return 0;
} 
