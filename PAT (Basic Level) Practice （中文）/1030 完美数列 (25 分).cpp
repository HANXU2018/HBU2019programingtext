#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,p;
	cin>>n>>p;
	vector<int> num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}sort(num.begin(),num.end());
	int max=0;
	int pmin=0;
	for(int i=0;i<n;i++){
		if(num[i]<=num[pmin]*p){
			if(max<i-pmin+1)max=i-pmin+1;
		}
	}
	cout<<max;
	return 0;
}
