#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,a;
	cin>>n;
	map<int ,int>mp;
	for(int i=0;i<n;i++){
		cin>>a;
		mp[a]=1;
	}
	for(int i=0;i<n;i++){
		cin>>a;
		mp[a]=1;
	}
	int i=0;
 	for(auto it= mp.begin();it != mp.end();i++,it++){
        if(i==(mp.size()-1)/2){
        	cout<<it->first;
        	//return 0;
		}
		
    }
	
	return 0;
}
