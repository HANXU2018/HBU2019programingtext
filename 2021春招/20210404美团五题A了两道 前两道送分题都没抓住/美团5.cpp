#include<iostream>
using namespace std;
int main(){
	int a,b,t;
	cin>>a>>b;
	int suma=0;
	int sumb=0;
	int mmax=0,mmbx=0;
	for(int i=0;i<a;i++){
		cin>>t;
		suma+=t;
		if(suma>mmax){
			mmax=suma;
		}
//		if(suma<0){
//			suma=0;
//		}
	} 
	for(int i=0;i<b;i++){
		cin>>t;
		sumb+=t;
		if(sumb>mmbx){
			mmbx=sumb;
		}
//		if(sumb<0){
//			sumb=0;
//		}
	}
	if(mmax<0)mmax=0;
	if(mmbx<0)mmbx=0;
	cout<<mmax+mmbx<<endl;
    return 0;
}
