#include<iostream>
using namespace std;
int a[1000];
int b[1000];
int a1,b1;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int s;
		cin>>s;
		if(s%2==0){
			b[b1++]=s;
		}else{
			a[a1++]=s;
		}
	}
	int flag=0;
	int a2=0,b2=0;
	while(a1>a2||b1>b2){
		if(a1>a2){
			if(flag){
				cout<<" ";
			}flag=1;
			cout<<a[a2++];
		}
		if(a1>a2){if(flag){
				cout<<" ";
			}flag=1;
			cout<<a[a2++];
		}
		if(b1>b2){if(flag){
				cout<<" ";
			}flag=1;
			cout<<b[b2++];
		}
	}
	return 0;
} 
