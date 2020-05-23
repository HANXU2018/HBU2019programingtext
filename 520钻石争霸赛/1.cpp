#include<iostream>
using namespace std;
int num[100005];
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>num[i];
	}
	int sum=0;
	for(int j=0;j<a;j++){
		for(int k=0;k<j;k++){
			if(num[k]+num[j]>b){
				if(num[k]+b>num[j]){
				if(b+num[j]>num[k]){
				sum++;
			}
			}
			}
		}
	}
	cout<<sum;
	return 0;
}
