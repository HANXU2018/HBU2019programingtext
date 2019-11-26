#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	string s[101];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<k;i++){
		for(int a=i;a<n-1;a++){
			if(s[a]>s[a+1]){
				string t=s[a];
				s[a]=s[a+1];
				s[a+1]=t;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		cout<<s[i]<<endl;
	}
	cout<<s[n-1];
	return 0;
} 
