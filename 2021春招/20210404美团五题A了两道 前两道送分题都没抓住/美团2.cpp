#include<iostream>
using namespace std;

int jj[180];
int ww[360];
int main(){
	int n;
	cin>>n;
	long long jing=0,wei=0;
	int a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a==0){
			ww[b]=1;
		}
		if(a==1){
			jj[b%180]=1;
		}
	}
	for(int i=0;i<180;i++){
		if(jj[i]==1)jing++;
	//	if(ww[i]==1)wei++;
	}
	for(int i=0;i<360;i++){
		if(ww[i]==1)wei++;
	//	if(ww[i]==1)wei++;
	}
	cout<<(jing+1)*(wei+1);
	return 0;
}
