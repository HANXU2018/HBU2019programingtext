#include<iostream>
#include<vector>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	vector<long long int>num(m+1);
	vector<long long int>num2(m+1);
	for(int i=1;i<=m;i++){
		cin>>num[i];
		num2[i]=num2[i-1]+num[i];
		//cout<<"********"<<num2[i]<<endl;
	}
	int flag=0;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		
		cout<<num2[b]-num2[a-1]<<endl;
	}
	return 0;
}
