#include<iostream>
using namespace std;
int qinglv[100000]={-1};
int keren[100000]={0};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		qinglv[a]=b;
		qinglv[b]=a;
	}
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		keren[a]+=1;
		if(qinglv[a]!=-1){
			keren[qinglv[a]]-=1;
		}
	}
	int count=0;
	for(int i=0;i<100000;i++){
		if(keren[i]==1){
			//cout<<i<<" ";
			count++;
		}
	}
	cout<<count<<endl;
	int k=0;
	for(int i=0;i<100000;i++){
		if(k){
		
		if(keren[i]==1){
			printf(" %05d",i);
		}
		}else{
			if(keren[i]==1){
			k=1;
			printf("%05d",i);
		}
		}
	}
	return 0;
}
