#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,flag=1;
		cin>>a;
		int count=1;
		for(int b=0;b<to_string(a).length();b++){
			count*=10;
		}
		for(int b=0;b<10;b++){
			if(b*a*a%count==a){
				cout<<b<<" "<<b*a*a<<endl;
			flag=0;break;
			}
		}
		if(flag){
			cout<<"No"<<endl; 	
		}
		
	}
	return 0;
}
