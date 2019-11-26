#include<iostream>
using namespace std;
int num[10];
int na[100];
int main(){
	int n,d,sum=0; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int a=0;a<n;a++){
		for(int b=0;b<n;b++){
			if(a==b){
				continue;
			}
			d=num[a]*10+num[b];
			na[d]=1;
			//cout<<d<<endl;
		}
	}for(int i=0;i<99;i++){
		if(na[i]==1){
			sum+=i;
		}
	}
	cout<<sum;
	return 0;
} 
