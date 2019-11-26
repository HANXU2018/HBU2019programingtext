#include<iostream>
using namespace std;
int a,n,ji,ou,c,d;
int j[1000],o[1000];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		a%2==0?o[ou++]=a:j[ji++]=a;
	}while(ji>c||ou>d){
		if(ji>c){
			cout<<j[c++];if(n-->0)cout<<" ";
		}
		if(ji>c){
			cout<<j[c++];if(n-->0)cout<<" ";
		}
		if(ou>d){
			cout<<o[d++];if(n-->0)cout<<" ";
		}
	}
	return 0;
} 
