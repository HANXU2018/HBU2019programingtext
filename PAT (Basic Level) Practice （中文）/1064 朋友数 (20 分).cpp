#include<iostream>
using namespace std;
int num[50];
int main(){
	int n,flag=0,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b=0;
		cin>>a;
		while(a>0){
			b+=a%10;
			a=a/10;
		}if(num[b]==0){
           count++;  
        }
        num[b]=1;
	}
	cout<<count<<endl;
	for(int i=0;i<50;i++){
		if(num[i]==1){
			if(flag){
				cout<<" ";
			}flag=1;
			cout<<i;
		}
	}
}
