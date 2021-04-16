#include<iostream>
using namespace std;
int num[10005];
int main(){
	int n,t,p;
	cin>>n;
	while(n--){
		cin>>t;
		for(int i=0;i<10005;i++){
			num[i]=0;
		}
		while(t--){
			cin>>p;
			num[p]++;
		}
		int j=0;
		for(j=0;j<10005&&num[j]!=1;j++);
		if(j==10005)cout<<-1<<endl;
		else cout<<j<<endl;
	}
	return 0;
} 
