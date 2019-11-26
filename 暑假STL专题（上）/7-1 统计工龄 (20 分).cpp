#include<iostream>
using namespace std;
int age[51];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		age[a]++;
	}
	for(int i=0;i<51;i++){
		if(age[i]>0){
			cout<<i<<":"<<age[i]<<endl;
		}
	}
	return 0;
} 
