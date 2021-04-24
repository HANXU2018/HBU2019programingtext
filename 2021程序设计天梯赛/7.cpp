#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,t;
	int max=-1;
	int min=999999999;
	cin>>n;
	map<int,int>nl;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t>max)max=t;
		if(t<min)min=t;
		nl[t]++;
	}
	cout<<min<<" "<<nl[min]<<endl<<max<<" "<<nl[max];
	return 0;
} 
