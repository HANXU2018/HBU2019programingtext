#include<iostream>
using namespace std;
int m1[2000];
int m2[2000];
int mult[2000];
int add[2000];
void show(int s[]){
	for(int i=1999;i>=0;i--){
		if(s[i]!=0){
			cout<<s[i]<<" "<<i<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		m1[b]=a;
		add[b]+=a;
		cout<<"b=="<<b<<"*** "<<add[b]<<endl;
	}cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		m2[b]=a;
		add[b]+=a;
		cout<<"b=="<<b<<"*** "<<add[b]<<endl;
	}
	for(int a=0;a<1005;a++){
		for(int b=0;b<1005;b++){
			mult[a+b]=m1[a]*m1[b];
		}
	}
	for(int i=1999;i>=0;i--){
		if(mult[i]!=0){
			cout<<mult[i]<<" "<<i<<" ";
		}
	}
	
	cout<<endl;
	for(int i=1999;i>=0;i--){
		{
			cout<<add[i]<<" "<<i<<" ";
		}
	}
	cout<<endl;
return 0;
}
