#include<iostream>
#include<algorithm>
using namespace std;
int sum[99999999];
int bol[99999999];
int main(){
	int n;
	int d=0;
	cin>>n;
	for(int i=0;i<2*n;i++){
		int a;
		cin>>a;
		if(bol[a]==0){
			sum[d++]=a;
			bol[a]=1;
		}
	}sort(sum+0,sum+d);
	cout<<sum[(d-1)/2];
	return 0;
}
