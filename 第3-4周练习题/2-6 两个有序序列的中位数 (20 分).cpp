#include<iostream>
using namespace std;
int a[100005],b[100005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}for(int i=0;i<n;i++){
		cin>>b[i];
	}int ai=0,bi=0;
	while(ai+bi<(2*n+1)/2){
		if(a[ai]>b[bi]){
			bi++;
		}else{
			ai++;
		}
	}
	cout<<(a[ai]>b[bi]?b[bi]:a[ai]);
	return 0;
}
