#include<iostream>
using namespace std;
int sum[1005];
int main(){
	int n,m,t;
	int max=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		for(int a=0;a<n;a++){
			cin>>t;
			sum[a]+=t; 
			if(sum[a]>max){
				max=sum[a];
			}
		}
	}
	int flag=0;
	cout<<max<<endl;
	for(int i=0;i<n;i++){
		if(sum[i]==max){
			if(flag ==0){
				flag=1;
				cout<<(i+1);
			}else{
				cout<<" "<<(i+1);
			}
		}
	}
	return 0;
} 
