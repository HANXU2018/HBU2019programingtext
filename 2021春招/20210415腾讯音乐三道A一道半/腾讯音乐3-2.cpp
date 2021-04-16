#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,t;
	cin>>n;
	vector<int>num(n);
	vector<vector<int>>number(n,vector<int>(n));
	//num.resize(n);
	for(int i=1;i<n;i++){
		cin>>t;
		num[i]=t-1;
		number[i][t-1]=1;
		number[t-1][i]=1;
		for(int j=0;j<n;j++){
			
		}
	}
	
//	for(int i=0;i<n;i++){
//		cout<<i<<" ";
//		for(int j=0;j<n;j++){
//			cout<<number[i][j];
//		}cout<<endl;
//	}
	
}
