#include<iostream>
using namespace std;
int add[100005][2];
int sum[100005][2];
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int p=0;
	int a1,a2,a3;
	for(int i=0;i<b;i++){
		cin>>a1>>a2>>a3;
		sum[a1][0]=a2;
		sum[a1][1]=a3;
	}
	while(a!=-1){
		add[p][0]=a;
		add[p][1]=sum[a][0];
		cout<<add[p][0]<<" "<<p<<" "<<add[p][1]<<endl;
		p++;
		a=sum[a][1];
		
	}
	for(int i=0;i<p;i++){
		cout<<add[i][0]<<" "<<add[i][1]<<endl;
	}
	return 0;
} 
