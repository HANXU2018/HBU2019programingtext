#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
	int n=0,t=0,ans=0;
	cin>>n;
	vector<int>aa(n);
	vector<int>bb(n);
	map<int,int>mp; 
	for(int i=0;i<n;i++){
		cin>>t;
		aa[i]=t;
	}
	for(int i=0;i<n;i++){
		cin>>t;
		bb[i]=t;
	}
	for(int i=0;i<n;i++){
		if(mp[aa[i]]==0){
			mp[aa[i]]=bb[i];
			continue;
		}else{
			int t=aa[i];
			int p=bb[i];
			while(mp[t]!=0){
				//cout<<t<<" "<<mp[t]<<endl;
				if(p<mp[t]){
					ans+=p;
					t++;
				}else{
					ans+=mp[t];
					int tt = mp[t];
					mp[t]=p;
					p=tt;
					t++;
				}
			}
			mp[t]=p;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
