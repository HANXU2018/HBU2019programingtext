#include<iostream>
using namespace std;
int a,n,ji,ou,c,d;
int j[1000],o[1000];
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		a%2==0?o[ou++]=a:j[ji++]=a;
	}while(ji>(c+1)||ou>(d+1)){
		if(ji>c&&n-->1)cout<<j[c++]<<" ";
		if(ji>c&&n-->1)cout<<j[c++]<<" ";
		if(ou>d&&n-->1)cout<<o[d++]<<" ";
	}if(ji>c)cout<<j[c++];
	if(ou>d)cout<<o[d++];
	return 0;
} 
