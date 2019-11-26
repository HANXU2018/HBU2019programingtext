#include<iostream>
using namespace std;
int cha[10005];
int main(){
	int n,a,ca;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		ca=i-a;
		if(ca<0){
			cha[-ca]++;
		}
		else cha[ca]++;
	}
	while(n>1){
		if(cha[n]>0){
			cout<<n<<" "<<cha[n]<<endl;
		}
		n--;
	}
	return 0;
}
