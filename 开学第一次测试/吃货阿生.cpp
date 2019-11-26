#include<iostream>
#include<map> 
using namespace std;
string str[1000];
int main(){
	int m,n;
	cin>>m>>n;
	map<string,int>cai;
	for(int i=0;i<m;i++){
		string s;
		int l;
		cin>>s>>l;
		str[i]=s;
		cai[s]=l;
	}
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		while(k>0){
			k--;
			string s;
			int l;
			cin>>s>>l;
			if(cai[s]>=l){
				cai[s]-=l;
			}
			else{
				cout<<"NO";
				return 0;
			}
		} 
	}
	cout<<"YES"<<endl;
	for(int i=0;i<m;i++){
		if(cai[str[i]]==0){
			continue;
		}
		cout<<str[i]<<" "<<cai[str[i]]<<endl;
	}
	return 0;
}
