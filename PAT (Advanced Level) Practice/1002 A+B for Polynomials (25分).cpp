#include<iostream>
#include<set>
using namespace std;
double num[10005];
int main(){
	int n;
	set<int>s;
	cin>>n;
	for(int i=0;i<n;i++){
		int a ;
		double b;
		cin>>a>>b;
		num[a]+=b;
		s.insert(a);
	}
	cin>>n;
	for(int i=0;i<n;i++){
		int a ;
		double b;
		cin>>a>>b;
		num[a]+=b;
		s.insert(a);
	}
	cout<<s.size();
	for(int i=10000;i>=0;i--){
		if(num[i]-0.00>0.05){
			cout<<" "<<i<<" "<<num[i];
		} 
	}
	return 0;
	
} 
