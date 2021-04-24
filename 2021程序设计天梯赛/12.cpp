#include<iostream>
#include<vector>
using namespace std;
int cundang[105];
int main(){
	int n,m;
	cin>>n>>m;
	int k,t;
	vector<vector<int> >num(n);
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>t;
			num[i].push_back(t);
		}
	} 
	int now = 0;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		if(a==0){
			//cout<<now<<" "<<num[now][b-1]<<endl;
			now = num[now][b-1]-1;
		}
		else if(a==1){
			cundang[b]=now;
			cout<<now+1<<endl;
			//cout<<"~~~~"<<endl;
		}
		else if(a==2){
			now = cundang[b];
		}
	}
	cout<<now+1<<endl;
	return 0;
} 
