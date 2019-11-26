#include<iostream>
using namespace std;
int way[100000];
int count=0,n,x;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		int flag=1;
		for(int a=0;a<=count;a++){
			if(x<way[a]){
				way[a]=x;
				flag=0;
				break;
			}
		}if(flag){
			way[++count]=x;
		}
	}
	cout<<count;
	return 0;
}
