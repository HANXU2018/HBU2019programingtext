#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string t;
		cin>>t;
		int k=0;
		if(t.length()>s.length()){
			cout<<"Not Found"<<endl;
			continue;
		}
		for(int a=0;a<=(s.length()-t.length());a++){
			string m=s.substr(a,t.length());
			if(m==t){
				string l=s.substr(a);
				cout<<l<<endl;
				k=1;
				break;
			}
		}
		if(k==0){
			cout<<"Not Found"<<endl;
		}
	}
	return 0;
}
