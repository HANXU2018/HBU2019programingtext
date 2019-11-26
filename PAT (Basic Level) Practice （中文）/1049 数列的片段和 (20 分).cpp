#include<iostream>
using namespace std;
double sum[100005];
int main(){
	int n;
	cin>>n;
	double s=0;
	for(int i=0;i<n;i++){
		cin>>sum[i];
		s+=sum[i]*(i+1)*(n-i);
	} 
	printf("%.2f",s);
	return 0;
} 
