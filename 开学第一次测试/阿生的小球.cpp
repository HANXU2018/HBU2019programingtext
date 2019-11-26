#include<iostream>
#include<vector>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	vector<int>num(m+1);
	for(int i=1;i<=m;i++){
		cin>>num[i];
	}
	int flag=0;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		int min=num[a];
		for(int l=a+1;l<=b;l++){
			if(min>num[l]){
				min=num[l];
			}
		}
		if(flag){
			cout<<" ";
			
		}flag=1;
		cout<<min;
	}
	return 0;
}
