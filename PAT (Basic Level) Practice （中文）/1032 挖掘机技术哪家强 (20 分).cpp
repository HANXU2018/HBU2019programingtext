#include<iostream>
using namespace std;
int stu[10000];
int main(){
	int n,max=0,maxid;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		stu[a]+=b;
		if(stu[a]>max){
			max=stu[a];
			maxid=a;
		}
	}
	cout<<maxid<<" "<<max; 
	return 0;
} 
